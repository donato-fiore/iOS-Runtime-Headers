// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IDSSIGNINGKEYDIVERSIFIER_H
#define IDSSIGNINGKEYDIVERSIFIER_H

@class NSString, NSData;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface IDSSigningKeyDiversifier : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) NSString *diversifier; // ivar: _diversifier
@property (retain, nonatomic) NSData *trackingPreventionSecret; // ivar: _trackingPreventionSecret


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDiversifier:(id)arg0 trackingPreventionSecret:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif