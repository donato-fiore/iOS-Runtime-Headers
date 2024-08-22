// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WEBLOWPOWERMODEOBSERVER_H
#define WEBLOWPOWERMODEOBSERVER_H


#import <Foundation/Foundation.h>


@interface WebLowPowerModeObserver : NSObject

@property (readonly, nonatomic) BOOL isLowPowerModeEnabled; // ivar: _isLowPowerModeEnabled
@property (nonatomic) *void notifier; // ivar: _notifier


-(id)initWithNotifier:(*void)arg0 ;
-(void)_didReceiveLowPowerModeChange;
-(void)dealloc;


@end


#endif