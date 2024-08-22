// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef APWSETTINGS_H
#define APWSETTINGS_H

@class NSUserDefaults, NSDate, NSString;

#import <Foundation/Foundation.h>


@interface APWSettings : NSObject

@property (nonatomic, getter=isDebugUIEnabled) BOOL debugUIEnabled;
@property (nonatomic, getter=isDemoModeEnabled) BOOL demoModeEnabled;
@property (nonatomic, getter=isForceEmptyEnabled) BOOL forceEmptyEnabled;
@property (readonly, nonatomic) NSUserDefaults *internalSettings; // ivar: _internalSettings
@property (copy, nonatomic) NSDate *lastViewDidDisappearDate; // ivar: _lastViewDidDisappearDate
@property (copy, nonatomic) NSString *savedContentSizeCategory;
@property (nonatomic, getter=isSnapshotLabelEnabled) BOOL snapshotLabelEnabled;
@property (nonatomic, getter=isWidgetFeedbackEnabled) BOOL widgetFeedbackEnabled; // ivar: _widgetFeedbackEnabled


+(id)sharedSettings;
-(BOOL)isActionsEnabled;
-(NSInteger)numberOfActionPredictions;
-(id)_appsForDemoMode;
-(void)setActionsEnabled:(BOOL)arg0 ;
-(void)setNumberOfActionPredictions:(NSInteger)arg0 ;


@end


#endif