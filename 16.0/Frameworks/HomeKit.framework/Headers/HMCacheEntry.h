// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMCACHEENTRY_H
#define HMCACHEENTRY_H

@class HMFObject, NSData, NSDate;
@protocol NSSecureCoding;



@interface HMCacheEntry : HMFObject <NSSecureCoding>



@property (readonly, copy) NSData *data; // ivar: _data
@property (readonly) BOOL isExpired;
@property (readonly, copy) NSDate *lastModificationDate; // ivar: _lastModificationDate


+(BOOL)supportsSecureCoding;
+(id)shortDescription;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithData:(id)arg0 lastModificationDate:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif