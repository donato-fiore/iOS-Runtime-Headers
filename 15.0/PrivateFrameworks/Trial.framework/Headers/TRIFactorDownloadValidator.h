// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TRIFACTORDOWNLOADVALIDATOR_H
#define TRIFACTORDOWNLOADVALIDATOR_H


#import <Foundation/Foundation.h>


@interface TRIFactorDownloadValidator : NSObject



+(BOOL)validateDownloadForFactors:(id)arg0 withNamespace:(id)arg1 paths:(id)arg2 container:(*int)arg3 assetIndexesByTreatment:(*id)arg4 experimentIds:(*id)arg5 assetIdsByFactorPack:(*id)arg6 rolloutFactorNames:(*id)arg7 rolloutDeployments:(*id)arg8 error:(*id)arg9 ;


@end


#endif