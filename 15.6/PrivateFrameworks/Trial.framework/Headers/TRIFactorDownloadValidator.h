// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TRIFACTORDOWNLOADVALIDATOR_H
#define TRIFACTORDOWNLOADVALIDATOR_H


#import <Foundation/Foundation.h>


@interface TRIFactorDownloadValidator : NSObject



+(BOOL)validateDownloadForFactors:(id)arg0 withNamespace:(id)arg1 paths:(id)arg2 container:(*int)arg3 factorsState:(id)arg4 assetIndexesByTreatment:(*id)arg5 experimentIds:(*id)arg6 assetIdsByFactorPack:(*id)arg7 rolloutFactorNames:(*id)arg8 rolloutDeployments:(*id)arg9 error:(*id)arg10 ;


@end


#endif