// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TRIEVALUATIONSTATUSDEFAULTPROVIDER_H
#define TRIEVALUATIONSTATUSDEFAULTPROVIDER_H

@class _PASXPCClientHelper;
@protocol TRIEvaluationStatusProvider;

#import <Foundation/Foundation.h>


@interface TRIEvaluationStatusDefaultProvider : NSObject <TRIEvaluationStatusProvider>

 {
    _PASXPCClientHelper *_clientHelper;
}




-(BOOL)enumerateActiveEvaluationsForMLRuntimeWithError:(*id)arg0 block:(id)arg1 ;
-(id)enumerateStatusOfEvaluationsForMLRuntimeWithCursor:(id)arg0 error:(*id)arg1 block:(id)arg2 ;
-(id)init;
-(id)syncProxyWithErrorHandler:(id)arg0 ;


@end


#endif