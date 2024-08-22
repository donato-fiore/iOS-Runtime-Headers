// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UASHAREDPASTEBOARDINFO_H
#define UASHAREDPASTEBOARDINFO_H

@class NSFileHandle, NSArray, NSDictionary, NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface UASharedPasteboardInfo : NSObject <NSSecureCoding, NSCopying>



@property (retain) NSFileHandle *dataFile; // ivar: _dataFile
@property NSInteger dataSize; // ivar: _dataSize
@property (copy) NSArray *items; // ivar: _items
@property (copy) NSDictionary *sandboxExtensions; // ivar: _sandboxExtensions
@property (copy) NSString *sharedDataPath; // ivar: _sharedDataPath


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif