// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKSMSCOMPOSEQUEUINGREMOTEVIEWCONTROLLERPROXY_H
#define CKSMSCOMPOSEQUEUINGREMOTEVIEWCONTROLLERPROXY_H

@class NSMutableArray;
@protocol CKSMSCompose;

#import <Foundation/Foundation.h>


@interface CKSMSComposeQueuingRemoteViewControllerProxy : NSObject

@property (retain, nonatomic) NSMutableArray *queuedInvocations; // ivar: _queuedInvocations
@property (retain, nonatomic) NSObject<CKSMSCompose> *serviceViewControllerProxy; // ivar: _serviceViewControllerProxy


-(id)init;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(void)dealloc;
-(void)forwardInvocation:(id)arg0 ;


@end


#endif