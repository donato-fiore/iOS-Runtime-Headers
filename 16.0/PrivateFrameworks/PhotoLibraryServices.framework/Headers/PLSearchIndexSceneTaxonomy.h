// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLSEARCHINDEXSCENETAXONOMY_H
#define PLSEARCHINDEXSCENETAXONOMY_H

@class PFSceneTaxonomy;



@interface PLSearchIndexSceneTaxonomy : PFSceneTaxonomy



+(BOOL)_useHighRecallThresholds;
-(void)enumerateKeywordAndSynonymsForSceneIdentifiers:(id)arg0 usingBlock:(id)arg1 ;
-(void)enumerateKeywordAndSynonymsForScenes:(id)arg0 usingBlock:(id)arg1 ;


@end


#endif