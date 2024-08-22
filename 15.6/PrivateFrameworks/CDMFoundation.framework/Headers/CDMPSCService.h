// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CDMPSCSERVICE_H
#define CDMPSCSERVICE_H

@class SNLPPommesServerClassifier;


#import "CDMDAGBaseService.h"

@interface CDMPSCService : CDMDAGBaseService {
    SNLPPommesServerClassifier *_pscOrchestrator;
}




+(id)_emptyResponse;
+(id)assetFolderNames;
+(id)trialFactorName;
-(BOOL)isAssetRequired;
-(BOOL)isEnabled;
-(id)assetsPathURLForModelBundle:(id)arg0 ;
-(id)doInference:(id)arg0 error:(*id)arg1 ;
-(id)getSNLPPommesServerClassifierPath:(id)arg0 error:(*id)arg1 ;
-(id)handle:(id)arg0 ;
-(id)handleRequestCommandTypeNames;
-(id)setup:(id)arg0 ;


@end


#endif