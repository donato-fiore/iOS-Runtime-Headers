// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DACLIFECYCLEMANAGERMEDIATOR_H
#define DACLIFECYCLEMANAGERMEDIATOR_H

@class NSString;
@protocol DACLifecycleClientInterface;

#import <Foundation/Foundation.h>

#import "DACLifecycleManager.h"

@interface DACLifecycleManagerMediator : NSObject <DACLifecycleClientInterface>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) DACLifecycleManager *manager; // ivar: _manager
@property (readonly) Class superclass;


-(id)initWithLifecycleManager:(id)arg0 ;
-(void)activityListChanged:(id)arg0 ;
-(void)roleChanged:(id)arg0 ;


@end


#endif