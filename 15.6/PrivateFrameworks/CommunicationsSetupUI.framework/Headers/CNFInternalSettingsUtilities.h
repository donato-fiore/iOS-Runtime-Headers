// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNFINTERNALSETTINGSUTILITIES_H
#define CNFINTERNALSETTINGSUTILITIES_H


#import <Foundation/Foundation.h>


@interface CNFInternalSettingsUtilities : NSObject



+(BOOL)isViceroyLoggingEnabled;
+(id)IDSEnvironment;
+(id)currentInternalSettingsBundle;
+(void)killEverything;
+(void)killFaceTime;
+(void)killImagent;
+(void)killImavagent;
+(void)killMediaServerd;
+(void)killMobilePhone;
+(void)killMobileSMS;
+(void)nukeKeychain;
+(void)setCurrentInternalSettingsBundle:(id)arg0 ;
+(void)setIDSEnvironment:(id)arg0 ;
+(void)setViceroyLoggingEnabled:(BOOL)arg0 ;
+(void)signOutAllAccounts;
+(void)syncImagentLogSettings;


@end


#endif