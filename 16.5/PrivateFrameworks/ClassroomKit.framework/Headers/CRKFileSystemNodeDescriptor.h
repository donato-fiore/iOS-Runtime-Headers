// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRKFILESYSTEMNODEDESCRIPTOR_H
#define CRKFILESYSTEMNODEDESCRIPTOR_H

@class NSData, NSString;

#import <Foundation/Foundation.h>


@interface CRKFileSystemNodeDescriptor : NSObject

@property (readonly, copy, nonatomic) NSData *content; // ivar: _content
@property (readonly, copy, nonatomic) NSString *fileName; // ivar: _fileName
@property (readonly, nonatomic) NSInteger type; // ivar: _type


+(id)dataDescriptorWithFileName:(id)arg0 content:(id)arg1 ;
+(id)directoryDescriptorWithFileName:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithType:(NSInteger)arg0 fileName:(id)arg1 content:(id)arg2 ;


@end


#endif