// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMFPAIRINGKEY_H
#define HMFPAIRINGKEY_H

@class NSData;
@protocol NSSecureCoding, NSCopying;


#import "HMFObject.h"

@interface HMFPairingKey : HMFObject <NSSecureCoding, NSCopying>



@property (readonly, copy, nonatomic) NSData *data; // ivar: _data


+(BOOL)supportsSecureCoding;
+(void)load;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)attributeDescriptions;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPairingKeyData:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif