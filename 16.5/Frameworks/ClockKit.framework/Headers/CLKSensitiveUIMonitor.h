// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLKSENSITIVEUIMONITOR_H
#define CLKSENSITIVEUIMONITOR_H


#import <Foundation/Foundation.h>


@interface CLKSensitiveUIMonitor : NSObject



+(id)sharedMonitor;
-(BOOL)_isVendorRelease;
-(BOOL)considersUISensitivitySensitive:(NSInteger)arg0 ;
-(BOOL)isSensitiveUIEnabled;
-(BOOL)shouldHideForSensitivity:(NSInteger)arg0 ;
-(void)addSensitiveUIObserver:(id)arg0 ;
-(void)removeSensitiveUIObserver:(id)arg0 ;


@end


#endif