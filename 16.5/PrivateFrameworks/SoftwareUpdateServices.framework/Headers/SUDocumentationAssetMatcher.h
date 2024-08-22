// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUDOCUMENTATIONASSETMATCHER_H
#define SUDOCUMENTATIONASSETMATCHER_H

@class MAAsset;


#import "SUAssetStateMatcher.h"

@interface SUDocumentationAssetMatcher : SUAssetStateMatcher {
    MAAsset *_suAsset;
}




+(id)matcherDocumentationFromAsset:(id)arg0 ;
+(id)matcherForInstalledDocumentationFromAsset:(id)arg0 ;
-(id)_findMatchFromCandidates:(id)arg0 error:(*id)arg1 ;
-(id)_queryPredicateForProperties:(id)arg0 ;
-(id)_sortedMatcherPredicatesFromSoftwareUpdateAsset:(id)arg0 ;
-(id)initWithSoftwareUpdateAsset:(id)arg0 ;
-(id)initWithSoftwareUpdateAsset:(id)arg0 limitingToStates:(int)arg1 ;
-(void)_modifyMADownloadOptions:(id)arg0 ;
-(void)dealloc;


@end


#endif