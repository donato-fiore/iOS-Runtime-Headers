// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDPFOLLOWUPCONTEXT_H
#define CDPFOLLOWUPCONTEXT_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CDPFollowUpContext : NSObject <NSSecureCoding>

 {
    NSUInteger _repairType;
}


@property (copy, nonatomic) NSString *altDSID; // ivar: _altDSID
@property (copy, nonatomic) NSString *followUpType; // ivar: _followUpType
@property (nonatomic) BOOL force; // ivar: _force
@property (nonatomic) NSUInteger repairType;
@property (nonatomic) BOOL shouldNotify; // ivar: _shouldNotify


+(BOOL)supportsSecureCoding;
+(id)_contextWithType:(id)arg0 cdpContext:(id)arg1 ;
+(id)contextForConfirmExistingSecret;
+(id)contextForOfflinePasscodeChange;
+(id)contextForRecoveryKeyRepair;
+(id)contextForSecureTerms;
+(id)contextForSettingUpBiometrics;
+(id)contextForStateRepair;
+(id)contextForWalrusCreatePasscodeWithCDPContext:(id)arg0 ;
+(id)contextWithType:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif