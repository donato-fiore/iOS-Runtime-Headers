// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TRIUSERCOVARIATES_H
#define TRIUSERCOVARIATES_H

@protocol TRIUserCovariateProviding;

#import <Foundation/Foundation.h>

#import "TRIServerContext.h"

@interface TRIUserCovariates : NSObject <TRIUserCovariateProviding>

 {
    TRIServerContext *_context;
}




-(id)_applicationRecordForBundleId:(id)arg0 ;
-(id)initWithContext:(id)arg0 ;
-(id)tri_hasApplicationWithBundleId:(id)arg0 ;
-(id)tri_majorVersionForBundleId:(id)arg0 ;
-(id)tri_minorVersionForBundleId:(id)arg0 ;
-(id)tri_patchVersionForBundleId:(id)arg0 ;
-(id)tri_shortVersionStringForBundleId:(id)arg0 ;
-(id)tri_versionForBundleId:(id)arg0 ;
-(id)tri_versionForBundleId:(id)arg0 compareToString:(id)arg1 ;
-(id)tri_versionStringForBundleId:(id)arg0 ;


@end


#endif