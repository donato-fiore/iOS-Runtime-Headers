// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef COTIMERMANAGERMEDIATOR_H
#define COTIMERMANAGERMEDIATOR_H

@class NSString;
@protocol COTimerManagerClientInterface;

#import <Foundation/Foundation.h>

#import "COTimerManager.h"

@interface COTimerManagerMediator : NSObject <COTimerManagerClientInterface>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) COTimerManager *manager; // ivar: _manager
@property (readonly) Class superclass;


-(id)initWithTimerManager:(id)arg0 ;
-(void)postNotificationName:(id)arg0 withUserInfo:(id)arg1 callback:(id)arg2 ;


@end


#endif