// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CSSESSIONMANAGER_H
#define CSSESSIONMANAGER_H

@class SBLockScreenDefaults;
@protocol CSItemDestination;

#import <Foundation/Foundation.h>

#import "CSWidgetMetricsProvider.h"

@interface CSSessionManager : NSObject

@property (retain, nonatomic) NSObject<CSItemDestination> *itemDestination; // ivar: _itemDestination
@property (retain, nonatomic) SBLockScreenDefaults *lockScreenDefaults; // ivar: _lockScreenDefaults
@property (weak, nonatomic) CSWidgetMetricsProvider *widgetMetricsProvider; // ivar: _widgetMetricsProvider


-(id)initWithItemDestination:(id)arg0 ;
-(void)addSession;
-(void)removeSession;


@end


#endif