// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFPINCODE_H
#define HFPINCODE_H

@class NSMutableSet, NSSet, NSString, HMAccessCodeUserInformation;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface HFPinCode : NSObject <NSCopying>

 {
    NSMutableSet *_accessoryAccessCodes;
    NSMutableSet *_accessories;
}


@property (readonly, nonatomic) NSSet *accessories;
@property (readonly, nonatomic) NSSet *accessoryAccessCodes;
@property (readonly, nonatomic) BOOL hasRestrictions;
@property (readonly, copy, nonatomic) NSString *pinCodeValue; // ivar: _pinCodeValue
@property (retain, nonatomic) HMAccessCodeUserInformation *userLabel; // ivar: _userLabel


+(id)na_identity;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithNewPinCodeValue:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithAccessoryAccessCode:(id)arg0 ;
-(id)initWithHomeAccessCode:(id)arg0 ;
-(id)initWithLabel:(id)arg0 accessCodeValue:(id)arg1 accessoryAccessCodes:(id)arg2 ;
-(void)addAccessories:(id)arg0 ;
-(void)addAccessoryAccessCode:(id)arg0 ;
-(void)removeAccessories:(id)arg0 ;
-(void)removeAccessoryAccessCode:(id)arg0 ;


@end


#endif