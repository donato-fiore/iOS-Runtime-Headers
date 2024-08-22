// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SBACCESSIBILITYWINDOWHOSTINGCONTROLLERSERVERTARGET_H
#define _SBACCESSIBILITYWINDOWHOSTINGCONTROLLERSERVERTARGET_H

@class BSServiceConnection;
@protocol SBSAccessibilityWindowHostingClientToServerInterface;

#import <Foundation/Foundation.h>


@interface _SBAccessibilityWindowHostingControllerServerTarget : NSObject

@property (readonly, weak, nonatomic) BSServiceConnection *connection; // ivar: _connection
@property (weak, nonatomic) NSObject<SBSAccessibilityWindowHostingClientToServerInterface> *proxyInterface; // ivar: _proxyInterface


+(id)currentTarget;
-(id)initWithConnection:(id)arg0 proxyInterface:(id)arg1 ;
-(void)_performBlock:(id)arg0 ;
-(void)registerWindowWithContextID:(id)arg0 atLevel:(id)arg1 ;
-(void)unregisterWindowWithContextID:(id)arg0 ;


@end


#endif