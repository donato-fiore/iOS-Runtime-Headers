// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TAANALYTICSMANAGERSETTINGS_H
#define TAANALYTICSMANAGERSETTINGS_H


#import <Foundation/Foundation.h>


@interface TAAnalyticsManagerSettings : NSObject

@property BOOL enableSubmission; // ivar: _enableSubmission
@property (nonatomic) NSUInteger settingsVersion; // ivar: _settingsVersion


-(id)init;
-(id)initWithEnableSubmissionOrDefault:(id)arg0 andSettingsVersion:(NSUInteger)arg1 ;


@end


#endif