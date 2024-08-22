// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEORPPROBLEMOPTINREQUESTER_H
#define GEORPPROBLEMOPTINREQUESTER_H



#import "GEOServiceRequester.h"

@interface GEORPProblemOptInRequester : GEOServiceRequester



+(id)sharedInstance;
-(id)_validateResponse:(id)arg0 ;
-(void)cancelRequest:(id)arg0 ;
-(void)startWithRequest:(id)arg0 traits:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif