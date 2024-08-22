// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HFMEDIAACCESSORYUTILITY_H
#define HFMEDIAACCESSORYUTILITY_H

@class NSMutableDictionary, NSMutableArray;

#import <Foundation/Foundation.h>


@interface HFMediaAccessoryUtility : NSObject

@property (retain) NSMutableDictionary *restartStateList; // ivar: _restartStateList
@property (retain) NSMutableArray *uuidTrackingList; // ivar: _uuidTrackingList


+(id)sharedInstance;
-(BOOL)checkIfAccessoryisPartofHomeAndHasLanguageSettings:(id)arg0 ;
-(BOOL)checkIfLanguageSetupIsDoneForAccessory:(id)arg0 ;
-(BOOL)isHomePodRestartInitiated:(id)arg0 ;
-(BOOL)isHomePodRestartingCurrently:(id)arg0 ;
-(id)init;
-(void)markUUIDReachableViaRapport:(id)arg0 ;
-(void)markUUIDUnreachableViaRapport:(id)arg0 ;
-(void)updateHomePodAccessoryRestartState:(NSUInteger)arg0 with:(id)arg1 ;


@end


#endif