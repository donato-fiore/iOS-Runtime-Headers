// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMFKEY_H
#define HMFKEY_H

@class NSData, NSString;
@protocol NSSecureCoding, NSCopying;


#import "HMFObject.h"

@interface HMFKey : HMFObject <NSSecureCoding, NSCopying>



@property (readonly, copy) NSData *data; // ivar: _data
@property (readonly) NSUInteger size; // ivar: _size
@property (readonly, copy) NSString *type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToData:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithType:(id)arg0 size:(NSUInteger)arg1 data:(id)arg2 ;
-(id)shortDescription;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif