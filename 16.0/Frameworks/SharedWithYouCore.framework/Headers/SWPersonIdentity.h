// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SWPERSONIDENTITY_H
#define SWPERSONIDENTITY_H

@class NSArray, NSData;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface SWPersonIdentity : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSArray *publicKeys; // ivar: _publicKeys
@property (readonly, copy, nonatomic) NSData *rootHash; // ivar: _rootHash
@property (readonly, nonatomic) NSData *trackingPreventionSalt; // ivar: _trackingPreventionSalt


+(BOOL)supportsSecureCoding;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToPersonIdentity:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRootHash:(id)arg0 ;
-(id)initWithRootHash:(id)arg0 publicKeys:(id)arg1 trackingPreventionSalt:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif