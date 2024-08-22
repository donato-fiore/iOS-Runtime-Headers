// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef COCAPABILITYMANAGERCLIENTINTERFACEMEDIATOR_H
#define COCAPABILITYMANAGERCLIENTINTERFACEMEDIATOR_H

@class NSString;
@protocol COCapabilityManagerClientInterface;

#import <Foundation/Foundation.h>

#import "COCapabilityManager.h"

@interface COCapabilityManagerClientInterfaceMediator : NSObject <COCapabilityManagerClientInterface>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) COCapabilityManager *manager; // ivar: _manager
@property (readonly) Class superclass;


-(id)initWithCapabilityManager:(id)arg0 ;
-(void)availabilityChanged:(BOOL)arg0 ofCapability:(id)arg1 inCluster:(id)arg2 ;


@end


#endif