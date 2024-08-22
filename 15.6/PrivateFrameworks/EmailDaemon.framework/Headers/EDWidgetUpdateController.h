// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EDWIDGETUPDATECONTROLLER_H
#define EDWIDGETUPDATECONTROLLER_H

@class NSString, NSDate, NSArray;
@protocol EFLoggable, EDMessageChangeHookResponder;

#import <Foundation/Foundation.h>


@interface EDWidgetUpdateController : NSObject <EFLoggable, EDMessageChangeHookResponder>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSDate *lastUpdate; // ivar: _lastUpdate
@property (nonatomic) NSInteger numberOfUpdates; // ivar: _numberOfUpdates
@property (readonly) Class superclass;
@property (retain, nonatomic) NSArray *timelineControllers; // ivar: _timelineControllers


+(id)log;
-(NSInteger)_activityDelay;
-(id)initWithWidgetBundleIdentifier:(id)arg0 widgetKindIdentifiers:(id)arg1 hookRegistry:(id)arg2 ;
-(void)_refreshTimelines;
-(void)_restoreFromUserDefaults;
-(void)_runActivity;
-(void)_scheduleActivity;
-(void)_updateLastUpdateInformation;
-(void)_writeUserDefaults;
-(void)dealloc;
-(void)persistenceDidAddMessages:(id)arg0 generationWindow:(id)arg1 ;
-(void)persistenceDidChangeFlags:(id)arg0 messages:(id)arg1 generationWindow:(id)arg2 ;


@end


#endif