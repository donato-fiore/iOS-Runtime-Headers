// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef COSTATEMANAGERCLIENTINTERFACEMEDIATOR_H
#define COSTATEMANAGERCLIENTINTERFACEMEDIATOR_H

@class NSString;
@protocol COStateManagerClientInterface;

#import <Foundation/Foundation.h>

#import "COStateManager.h"

@interface COStateManagerClientInterfaceMediator : NSObject <COStateManagerClientInterface>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) COStateManager *manager; // ivar: _manager
@property (readonly) Class superclass;


-(id)initWithStateManager:(id)arg0 ;
-(void)changesObserved:(id)arg0 forPredicate:(id)arg1 ;
-(void)mediaSystemLeaderDidChangeTo:(BOOL)arg0 callback:(id)arg1 ;
-(void)roleOfMember:(id)arg0 inCluster:(id)arg1 didChangeTo:(id)arg2 ;


@end


#endif