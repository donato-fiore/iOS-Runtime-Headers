// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CDMCCQRAERSERVICE_H
#define CDMCCQRAERSERVICE_H

@class QREllipsisAnaphoraPredictor;


#import "CDMDAGBaseService.h"

@interface CDMCcqrAerService : CDMDAGBaseService

@property (retain, nonatomic) QREllipsisAnaphoraPredictor *ellipsisAnaphoraPredictor; // ivar: _ellipsisAnaphoraPredictor


+(id)assetFolderName;
+(id)trialFactorName;
-(BOOL)isAssetRequired;
-(BOOL)isEnabled;
-(id)doInference:(id)arg0 status:(*id)arg1 ;
-(id)getPredictor:(id)arg0 FilesPath:(id)arg1 status:(*id)arg2 ;
-(id)handle:(id)arg0 ;
-(id)handleRequestCommandTypeNames;
-(id)setup:(id)arg0 ;


@end


#endif