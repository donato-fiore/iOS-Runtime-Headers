// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NMSKEEPLOCALREQUESTLOCAL_H
#define NMSKEEPLOCALREQUESTLOCAL_H



#import "NMSKeepLocalRequest.h"

@interface NMSKeepLocalRequestLocal : NMSKeepLocalRequest



+(id)sharedKeepLocalOperationQueue;
-(NSUInteger)_constraintsWithConstraints:(NSUInteger)arg0 options:(id)arg1 ;
-(NSUInteger)_validatorExceptionWithValidatorException:(NSUInteger)arg0 options:(id)arg1 ;
-(void)_performRequestWithConstraints:(NSUInteger)arg0 qualityOfService:(NSInteger)arg1 completion:(id)arg2 ;
-(void)performWithOptions:(id)arg0 completion:(id)arg1 ;


@end


#endif