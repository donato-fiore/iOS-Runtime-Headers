// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GCSCOPILOTFUSEDCONTROLLERSCOLLECTION_H
#define GCSCOPILOTFUSEDCONTROLLERSCOLLECTION_H

@class NSArray;
@protocol GCSCopilotFusedControllers, GCUserDefaults, GCSSettingsStoreService;

#import <Foundation/Foundation.h>


@interface GCSCopilotFusedControllersCollection : NSObject <GCSCopilotFusedControllers>

 {
    id<GCUserDefaults> *_userDefaults;
}


@property (readonly, weak, nonatomic) NSObject<GCSSettingsStoreService> *settingsStore; // ivar: _settingsStore
@property (retain, nonatomic) NSArray *values; // ivar: _values


-(BOOL)storeVersionIsCompatible;
-(id)_unitTest_fusePilotController:(id)arg0 withCopilot:(id)arg1 ;
-(id)copilotFusedControllerForControllerIdentifier:(id)arg0 ;
-(id)copilotFusedControllerForCopilotControllerIdentifier:(id)arg0 ;
-(id)copilotFusedControllerForFusedControllerIdentifier:(id)arg0 ;
-(id)copilotFusedControllerForPilotControllerIdentifier:(id)arg0 ;
-(id)initWithSettingsStore:(id)arg0 userDefaults:(id)arg1 ;
-(void)_unitTest_saveCopilotFusedControllers:(id)arg0 ;
-(void)_unitTest_unfuseCopilotFusedController:(id)arg0 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)updateCopilotFusedControllers:(id)arg0 ;


@end


#endif