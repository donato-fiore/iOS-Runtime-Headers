// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUAIRPLAYSCREENDETECTOR_H
#define PUAIRPLAYSCREENDETECTOR_H

@class NSArray;
@protocol PUAirPlayScreenReceiver;

#import <Foundation/Foundation.h>

#import "PUAirPlayScreenMap.h"

@interface PUAirPlayScreenDetector : NSObject

@property (retain, nonatomic, setter=_setDetectedScreensMap:) PUAirPlayScreenMap *_detectedScreensMap; // ivar: __detectedScreensMap
@property (readonly, nonatomic) NSArray *availableScreens;
@property (weak, nonatomic) NSObject<PUAirPlayScreenReceiver> *receiver; // ivar: _receiver


-(BOOL)shouldIgnoreScreen:(id)arg0 ;
-(id)init;
-(void)_detectedNewScreen:(id)arg0 ;
-(void)_lostScreen:(id)arg0 ;
-(void)_scanForAvailableScreensIfNeeded;
-(void)_setUpScreenNotifications;


@end


#endif