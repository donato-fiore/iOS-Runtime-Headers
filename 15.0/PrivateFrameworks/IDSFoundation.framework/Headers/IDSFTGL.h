// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IDSFTGL_H
#define IDSFTGL_H



#import "IDSGlobalLink.h"

@interface IDSFTGL : IDSGlobalLink



-(BOOL)_postProcessAllocbindResponse:(id)arg0 candidatePair:(id)arg1 candidatePairToken:(id)arg2 ;
-(BOOL)_setupNewQRLinkIfNecessary:(id)arg0 ;
-(void)_resetRetryCountForCandidatePair:(id)arg0 ;
-(void)disconnectWithCompletionHandler:(id)arg0 ;
-(void)sendSKEData:(id)arg0 ;
-(void)setDefaultUnderlyingLink:(char)arg0 ;
-(void)setHasPendingAllocation:(BOOL)arg0 ;
-(void)startWithOptions:(id)arg0 ;


@end


#endif