// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AUTHENTICATIONINPROGRESS_H
#define AUTHENTICATIONINPROGRESS_H

@class NSDictionary, NSDate, MechanismBase;
@protocol LAUIDelegate;

#import <Foundation/Foundation.h>


@interface AuthenticationInProgress : NSObject {
    id<LAUIDelegate> *_uiDelegate;
    NSDictionary *_internalOptions;
    id *_reply;
    int _originatorPid;
    NSDate *_started;
}


@property (readonly, nonatomic) MechanismBase *mechanism; // ivar: _mechanism
@property (readonly, nonatomic) NSInteger originatorId; // ivar: _originatorId
@property (readonly, nonatomic) unsigned int originatorUid; // ivar: _originatorUid
@property (readonly, nonatomic) NSInteger policy; // ivar: _policy
@property (readonly, nonatomic, getter=isRunning) BOOL running; // ivar: _running


-(id)description;
-(id)initWithMechanism:(id)arg0 policy:(NSInteger)arg1 uiDelegate:(id)arg2 originator:(id)arg3 internalInfo:(id)arg4 reply:(id)arg5 ;
-(void)runWithCompletionHandler:(id)arg0 ;


@end


#endif