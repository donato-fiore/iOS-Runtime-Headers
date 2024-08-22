// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CBCAMANAGER_H
#define CBCAMANAGER_H

@class NSMutableArray;


#import "CBModule.h"

@interface CBCAManager : CBModule {
    NSMutableArray *_displays;
    float _currentlySetMatrix;
    float _currentlySetScaler;
    float _digitalDimmingBrightnessScaler;
}




-(id)initWithCADisplay:(id)arg0 andQueue:(id)arg1 ;
-(void)colorRampPropertyHandler:(id)arg0 ;
-(void)dealloc;
-(void)displayBrightnessPropertyHandler:(id)arg0 ;
-(void)handleNotificationForKey:(id)arg0 withProperty:(id)arg1 ;
-(void)nitsThresholdPLCPropertyHandler:(id)arg0 ;
-(void)sendNotificationForKey:(id)arg0 andValue:(id)arg1 ;
-(void)updateDigitalDimmingBrightnessScaler:(id)arg0 ;


@end


#endif