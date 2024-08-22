// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _DKAPPLICATIONMONITOR_H
#define _DKAPPLICATIONMONITOR_H

@class DKMonitor, NSMutableDictionary, BMAppLaunchStream, BKSApplicationStateMonitor, NSString, BMFrontBoardDisplayLayout, BMSource, BMStream, FBSDisplayLayoutMonitor, NSMutableArray, NSSet;
@protocol FBSDisplayLayoutObserver;



@interface _DKApplicationMonitor : DKMonitor <FBSDisplayLayoutObserver>



@property (retain) NSMutableDictionary *activeExtensions; // ivar: _activeExtensions
@property (retain, nonatomic) BMAppLaunchStream *appLaunchStream; // ivar: _appLaunchStream
@property (retain, nonatomic) BKSApplicationStateMonitor *bksMonitor; // ivar: _bksMonitor
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *lastIdentifierSet; // ivar: _lastIdentifierSet
@property (retain, nonatomic) BMFrontBoardDisplayLayout *lastLayoutEvent; // ivar: _lastLayoutEvent
@property (retain, nonatomic) BMSource *layoutSource; // ivar: _layoutSource
@property (retain, nonatomic) BMStream *layoutStream; // ivar: _layoutStream
@property (retain, nonatomic) FBSDisplayLayoutMonitor *monitor; // ivar: _monitor
@property (retain, nonatomic) NSMutableArray *previouslyForegroundServices; // ivar: _previouslyForegroundServices
@property (retain, nonatomic) NSSet *servicesOfInterestForWatchCommunication; // ivar: _servicesOfInterestForWatchCommunication
@property (readonly) Class superclass;


+(id)_defaultEvent;
+(id)_eventFilterBlock:(SEL)arg0 ;
+(id)_eventWithBundleIdentifier:(id)arg0 launchReason:(id)arg1 shortVersionString:(id)arg2 exactBundleVersion:(id)arg3 ;
+(id)debugCategory;
+(id)entitlements;
+(id)eventStream;
+(void)addServicesForeground:(id)arg0 andRemoveServices:(id)arg1 ;
+(void)setFocalApplication:(id)arg0 launchReason:(id)arg1 ;
-(BOOL)ignoreAppExtension:(id)arg0 ;
-(id)currentActiveComplications;
-(id)init;
-(void)deactivate;
-(void)dealloc;
-(void)donateDisplayLayout:(id)arg0 withContext:(id)arg1 ;
-(void)layoutMonitor:(id)arg0 didUpdateDisplayLayout:(id)arg1 withContext:(id)arg2 ;
-(void)obtainCurrentValue;
-(void)platformSpecificStart;
-(void)platformSpecificStop;
-(void)registerForActiveComplicationChangeNotifications;
-(void)setCurrentActiveComplications;
-(void)start;
-(void)stop;
-(void)synchronouslyReflectCurrentValue;


@end


#endif