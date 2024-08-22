// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBUIREMOTEALERTIDLETIMERSETTINGS_H
#define SBUIREMOTEALERTIDLETIMERSETTINGS_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SBUIRemoteAlertIdleTimerSettings : NSObject <NSSecureCoding>



@property (nonatomic) CGFloat autoLockTimeout; // ivar: _autoLockTimeout
@property (nonatomic) BOOL disablesWarn; // ivar: _disablesWarn
@property (nonatomic) BOOL usesLockScreenRules; // ivar: _usesLockScreenRules


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif