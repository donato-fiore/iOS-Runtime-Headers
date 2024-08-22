// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDMPSCSERVICE_H
#define CDMPSCSERVICE_H

@class SNLPPommesServerClassifier;


#import "CDMDAGBaseService.h"

@interface CDMPSCService : CDMDAGBaseService {
    SNLPPommesServerClassifier *_pscOrchestrator;
}




+(BOOL)isAssetRequired;
+(BOOL)isEnabled;
+(id)_emptyResponse;
+(id)getAssetFolderNamesByTrialFactorNames;
-(id)assetsPathURLForModelBundle:(id)arg0 ;
-(id)doInference:(id)arg0 error:(*id)arg1 ;
-(id)getSNLPPommesServerClassifierPath:(id)arg0 error:(*id)arg1 ;
-(id)handle:(id)arg0 ;
-(id)handleRequestCommandTypeNames;
-(id)setup:(id)arg0 ;


@end


#endif