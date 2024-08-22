// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AKCAPIGGYBACKREPORTER_H
#define AKCAPIGGYBACKREPORTER_H



#import "AKCAReporter.h"

@interface AKCAPiggybackReporter : AKCAReporter



-(id)initWithRequestID:(id)arg0 ;
-(id)piggybackResultString:(NSUInteger)arg0 ;
-(void)didCancelRequesting;
-(void)didCircleTimeout;
-(void)didEscapeRequesting;
-(void)didFinishAccepting;


@end


#endif