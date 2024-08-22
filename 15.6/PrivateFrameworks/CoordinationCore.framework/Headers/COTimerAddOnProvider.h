// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef COTIMERADDONPROVIDER_H
#define COTIMERADDONPROVIDER_H

@class NSString, MTTimerManager;
@protocol COServiceAddOnProvider;

#import <Foundation/Foundation.h>

#import "COHomeHubAdapter.h"
#import "COHomeKitAdapter.h"

@interface COTimerAddOnProvider : NSObject <COServiceAddOnProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) COHomeHubAdapter *homehub; // ivar: _homehub
@property (readonly, nonatomic) COHomeKitAdapter *homekit; // ivar: _homekit
@property (readonly) Class superclass;
@property (readonly, nonatomic) MTTimerManager *timerManager; // ivar: _timerManager


-(id)init;
-(id)initWithTimerManager:(id)arg0 homekitAdapter:(id)arg1 hubAdapter:(id)arg2 ;
-(id)serviceAddOn;


@end


#endif