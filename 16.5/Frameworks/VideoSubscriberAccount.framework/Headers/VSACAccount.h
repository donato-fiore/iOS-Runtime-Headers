// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VSACACCOUNT_H
#define VSACACCOUNT_H


#import <Foundation/Foundation.h>


@interface VSACAccount : NSObject

@property (nonatomic) NSUInteger overridingPasswordOption; // ivar: _overridingPasswordOption


+(id)sharedInstance;
-(BOOL)hasAccount;
-(NSUInteger)convertedAMSAccountPasswordPromptSettingWithPaid:(BOOL)arg0 ;
-(NSUInteger)freeAppPasswordPromptSetting;
-(NSUInteger)paidAppPasswordPromptSetting;
-(id)account;
-(id)initWithManualPasswordOption:(NSUInteger)arg0 ;
-(id)username;


@end


#endif