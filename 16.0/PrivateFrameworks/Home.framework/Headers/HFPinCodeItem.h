// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFPINCODEITEM_H
#define HFPINCODEITEM_H

@class NSArray, HMHome, NSString, HMUser, HMAccessCodeUserInformation;
@protocol NSCopying;


#import "HFItem.h"

@interface HFPinCodeItem : HFItem <NSCopying>



@property (retain, nonatomic) NSArray *accessories; // ivar: _accessories
@property (nonatomic) BOOL hasRestrictions; // ivar: _hasRestrictions
@property (retain, nonatomic) HMHome *home; // ivar: _home
@property (copy, nonatomic) id *isEnabledOnAccessory; // ivar: _isEnabledOnAccessory
@property (nonatomic) BOOL isGuest; // ivar: _isGuest
@property (copy, nonatomic) NSString *pinCodeValue; // ivar: _pinCodeValue
@property (readonly, nonatomic) HMUser *user;
@property (retain, nonatomic) HMAccessCodeUserInformation *userLabel; // ivar: _userLabel


+(id)na_identity;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_subclass_updateWithOptions:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithPinCode:(id)arg0 inHome:(id)arg1 onAccessory:(id)arg2 ;
-(void)updateFromPinCode:(id)arg0 ;


@end


#endif