// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CDPFOLLOWUPCONTEXT_H
#define CDPFOLLOWUPCONTEXT_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CDPFollowUpContext : NSObject <NSSecureCoding>

 {
    NSUInteger _repairType;
}


@property (copy, nonatomic) NSString *followUpType; // ivar: _followUpType
@property (nonatomic) BOOL force; // ivar: _force
@property (nonatomic) NSUInteger repairType;
@property (nonatomic) BOOL shouldNotify; // ivar: _shouldNotify


+(BOOL)supportsSecureCoding;
+(id)contextForConfirmExistingSecret;
+(id)contextForOfflinePasscodeChange;
+(id)contextForRecoveryKeyRepair;
+(id)contextForSecureTerms;
+(id)contextForSettingUpBiometrics;
+(id)contextForStateRepair;
+(id)contextWithType:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif