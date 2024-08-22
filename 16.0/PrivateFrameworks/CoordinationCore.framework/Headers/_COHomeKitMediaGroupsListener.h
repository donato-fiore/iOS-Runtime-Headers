// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _COHOMEKITMEDIAGROUPSLISTENER_H
#define _COHOMEKITMEDIAGROUPSLISTENER_H

@class HMMediaGroupsController, NSString, HMHome;
@protocol HMMediaGroupsControllerDelegate, _COHomeKitMediaGroupsListenerDelegate;

#import <Foundation/Foundation.h>


@interface _COHomeKitMediaGroupsListener : NSObject <HMMediaGroupsControllerDelegate>



@property (readonly, nonatomic) HMMediaGroupsController *controller; // ivar: _controller
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_COHomeKitMediaGroupsListenerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HMHome *home; // ivar: _home
@property (readonly) Class superclass;


-(id)initWithHome:(id)arg0 ;
-(void)mediaGroupsController:(id)arg0 didReceiveGroup:(id)arg1 ;
-(void)mediaGroupsController:(id)arg0 didRemoveGroup:(id)arg1 ;


@end


#endif