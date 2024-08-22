// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SMCAIRPLANEMODEOBSERVER_H
#define SMCAIRPLANEMODEOBSERVER_H

@class RadiosPreferences;
@protocol RadiosPreferencesDelegate, SMCAirplaneModeObserverDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SMCAirplaneModeObserver : NSObject <RadiosPreferencesDelegate>



@property (weak, nonatomic) NSObject<SMCAirplaneModeObserverDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly, nonatomic) RadiosPreferences *radiosPreferences; // ivar: _radiosPreferences


-(BOOL)enabled;
-(id)initWithQueue:(id)arg0 ;
-(void)airplaneModeChanged;


@end


#endif