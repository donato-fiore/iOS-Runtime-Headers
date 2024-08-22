// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBDAEMONREQUEST_H
#define SBDAEMONREQUEST_H


#import <Foundation/Foundation.h>


@interface SBDaemonRequest : NSObject

@property (copy, nonatomic) id *disabler; // ivar: _disabler
@property (copy, nonatomic) id *enabler; // ivar: _enabler


// +(id)requestWithEnabler:(id)arg0 disabler:(unk)arg1  ;
-(void)dispatchDisablerOnQueue:(id)arg0 ;
-(void)dispatchEnablerOnQueue:(id)arg0 ;


@end


#endif