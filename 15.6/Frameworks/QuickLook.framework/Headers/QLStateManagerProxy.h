// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef QLSTATEMANAGERPROXY_H
#define QLSTATEMANAGERPROXY_H

@protocol QLPreviewControllerStateProtocolHostOnly;

#import <Foundation/Foundation.h>


@interface QLStateManagerProxy : NSObject

@property (weak) NSObject<QLPreviewControllerStateProtocolHostOnly> *stateManager; // ivar: _stateManager


-(BOOL)respondsToSelector:(SEL)arg0 ;
-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(void)dropMethod;
-(void)forwardInvocation:(id)arg0 ;


@end


#endif