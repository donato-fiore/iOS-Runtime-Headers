// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PBUIIMAGEONDISKFORMAT_H
#define PBUIIMAGEONDISKFORMAT_H

@class NSDictionary, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PBUIImageOnDiskFormat : NSObject <NSCopying>



@property (readonly, nonatomic) NSDictionary *addImageOptions; // ivar: _addImageOptions
@property (readonly, nonatomic) NSDictionary *destinationOptions; // ivar: _destinationOptions
@property (readonly, nonatomic) NSString *filenameExtension; // ivar: _filenameExtension
@property (readonly, nonatomic) NSString *typeIdentifier; // ivar: _typeIdentifier


+(id)atxWithBlockSize:(unsigned int)arg0 ;
+(id)defaultATX;
+(id)png;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)formatByAppendingDestinationOptions:(id)arg0 addImageOptions:(id)arg1 ;
-(id)initWithTypeIdentifier:(id)arg0 filenameExtension:(id)arg1 destinationOptions:(id)arg2 addImageOptions:(id)arg3 ;


@end


#endif