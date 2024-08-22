// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CARPFKEY_H
#define CARPFKEY_H

@class NSData, NSString;
@protocol NSSecureCoding, NSCopying;


#import "CARPFObject.h"

@interface CARPFKey : CARPFObject <NSSecureCoding, NSCopying>



@property (readonly, copy) NSData *data; // ivar: _data
@property (readonly) NSUInteger size; // ivar: _size
@property (readonly, copy) NSString *type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToData:(id)arg0 ;
-(NSUInteger)hash;
-(id)carpf_shortDescription;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithType:(id)arg0 size:(NSUInteger)arg1 data:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif