// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AKCASATORIREPORTER_H
#define AKCASATORIREPORTER_H



#import "AKCAReporter.h"

@interface AKCASatoriReporter : AKCAReporter



-(id)initWithRequestID:(id)arg0 ;
-(void)didCompleteVerificationWithSuccess:(BOOL)arg0 duration:(NSUInteger)arg1 ;
-(void)didCompleteWithSuccess:(BOOL)arg0 authorizationAlreadyComplete:(BOOL)arg1 ;
-(void)didPerformVerificationWithSuccess:(BOOL)arg0 duration:(NSUInteger)arg1 ;


@end


#endif