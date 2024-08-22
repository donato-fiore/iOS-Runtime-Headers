// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUAIRPLAYSCREENDETECTOR_H
#define PUAIRPLAYSCREENDETECTOR_H

@class NSArray, NSString, NSMutableDictionary, SBSExternalDisplayService;
@protocol SBSExternalDisplayServiceObserver, PUAirPlayScreenReceiver;

#import <Foundation/Foundation.h>


@interface PUAirPlayScreenDetector : NSObject <SBSExternalDisplayServiceObserver>



@property (readonly, nonatomic) NSArray *availableScreens;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSMutableDictionary *detectedScreensMap; // ivar: _detectedScreensMap
@property (readonly, nonatomic) SBSExternalDisplayService *externalDisplayService; // ivar: _externalDisplayService
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<PUAirPlayScreenReceiver> *receiver; // ivar: _receiver
@property (readonly) Class superclass;


-(BOOL)shouldIgnoreScreen:(id)arg0 displayInfo:(id)arg1 ;
-(id)init;
-(void)_createAirPlayScreenAndNotifyDelegate:(id)arg0 ;
-(void)_enumerateAllScreensAndDisplayInfos:(id)arg0 ;
-(void)_handleUpdatedDisplayInfo:(id)arg0 ;
-(void)_performBlockWithDisplayInfoForScreen:(id)arg0 handler:(id)arg1 ;
-(void)_performBlockWithScreenForDisplayInfo:(id)arg0 handler:(id)arg1 ;
-(void)_removeAirPlayScreenAndNotifyDelegate:(id)arg0 ;
-(void)_scanForAvailableScreens;
-(void)_sceneDidDisconnect:(id)arg0 ;
-(void)_sceneWillConnect:(id)arg0 ;
-(void)_setUpSceneNotifications;
-(void)externalDisplayDidUpdateProperties:(id)arg0 ;


@end


#endif