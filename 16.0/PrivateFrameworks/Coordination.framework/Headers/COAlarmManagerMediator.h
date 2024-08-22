// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef COALARMMANAGERMEDIATOR_H
#define COALARMMANAGERMEDIATOR_H

@class NSString;
@protocol COAlarmManagerClientInterface;

#import <Foundation/Foundation.h>

#import "COAlarmManager.h"

@interface COAlarmManagerMediator : NSObject <COAlarmManagerClientInterface>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) COAlarmManager *manager; // ivar: _manager
@property (readonly) Class superclass;


-(id)initWithAlarmManager:(id)arg0 ;
-(void)postNotificationName:(id)arg0 withUserInfo:(id)arg1 callback:(id)arg2 ;


@end


#endif