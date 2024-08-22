// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NEIKEV2REQUESTCONTEXT_H
#define NEIKEV2REQUESTCONTEXT_H

@class SWPreventSystemSleepAssertion;

#import <Foundation/Foundation.h>


@interface NEIKEv2RequestContext : NSObject {
    BOOL _requestInitiator;
    BOOL _preventSleepUntilFinished;
    int _requestType;
    SWPreventSystemSleepAssertion *_powerAssertion;
}




-(id)description;
-(id)initWithRequestType:(int)arg0 ;
-(void)dealloc;
-(void)sendCallbackSuccess:(BOOL)arg0 session:(id)arg1 ;


@end


#endif