// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXHERODATASERVER_H
#define ATXHERODATASERVER_H

@class NSXPCListener, NSString;
@protocol ATXHeroDataXPCInterface, NSXPCListenerDelegate, ATXPETEventTracker2Protocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "ATXHeroClipManager.h"
#import "ATXHeroAppManager.h"
#import "ATXHeroPoiManager.h"

@interface ATXHeroDataServer : NSObject <ATXHeroDataXPCInterface, NSXPCListenerDelegate>

 {
    NSXPCListener *_listener;
    ATXHeroClipManager *_heroClipManager;
    ATXHeroAppManager *_heroAppManager;
    ATXHeroPoiManager *_heroPoiManager;
    id<ATXPETEventTracker2Protocol> *_tracker;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)hashedPredictionsForPredictions:(id)arg0 ;
-(BOOL)_didPredictionsChange:(id)arg0 ;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)_filterPredictions:(id)arg0 currentLocation:(id)arg1 ;
-(id)_heroAppPredictionsFromPredictions:(id)arg0 ;
-(id)_heroClipPredictionsFromPredictions:(id)arg0 ;
-(id)_heroPoiPredictionsFromPredictions:(id)arg0 ;
-(id)init;
-(id)initWithHeroClipManager:(id)arg0 heroAppManager:(id)arg1 heroPoiManager:(id)arg2 tracker:(id)arg3 ;
-(id)initWithHeroClipManager:(id)arg0 heroAppManager:(id)arg1 tracker:(id)arg2 ;
-(void)_addBundleIdsToPredictions:(id)arg0 ;
-(void)_donateAppClipsToHeroClipManager:(id)arg0 ;
-(void)_donateHeroAppsToHeroAppManager:(id)arg0 ;
-(void)_donatePoiCategoriesToHeroPoiManager:(id)arg0 ;
-(void)_setExpiry;
-(void)_setPredictionsInDefaults:(id)arg0 ;
-(void)addConfirmForAppClipWithHeroAppPrediction:(id)arg0 completion:(id)arg1 ;
-(void)addHardRejectForAppClipWithHeroAppPrediction:(id)arg0 completion:(id)arg1 ;
-(void)addSoftRejectForAppClipWithHeroAppPrediction:(id)arg0 completion:(id)arg1 ;
-(void)dealloc;
-(void)donateHeroAppPredictions:(id)arg0 completion:(id)arg1 ;
-(void)feedbackScoreForAppClipWithHeroAppPrediction:(id)arg0 completion:(id)arg1 ;
-(void)getCurrentHeroPoiCategoryWithCompletion:(id)arg0 ;
-(void)openAppClipWithHeroAppPrediction:(id)arg0 completion:(id)arg1 ;
-(void)updateHeroAppManagerAndHeroClipManagerWithPredictions:(id)arg0 ;


@end


#endif