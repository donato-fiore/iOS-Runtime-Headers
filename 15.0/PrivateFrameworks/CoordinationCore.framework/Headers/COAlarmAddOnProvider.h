// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef COALARMADDONPROVIDER_H
#define COALARMADDONPROVIDER_H

@class MTAlarmManager, NSString;
@protocol COServiceAddOnProvider;

#import <Foundation/Foundation.h>

#import "COHomeHubAdapter.h"
#import "COHomeKitAdapter.h"

@interface COAlarmAddOnProvider : NSObject <COServiceAddOnProvider>



@property (readonly, nonatomic) MTAlarmManager *alarmManager; // ivar: _alarmManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) COHomeHubAdapter *homehub; // ivar: _homehub
@property (readonly, nonatomic) COHomeKitAdapter *homekit; // ivar: _homekit
@property (readonly) Class superclass;


-(id)init;
-(id)initWithAlarmManager:(id)arg0 homekitAdapter:(id)arg1 hubAdapter:(id)arg2 ;
-(id)serviceAddOn;


@end


#endif