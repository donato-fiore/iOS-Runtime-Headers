// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGAGGREGATIONENRICHMENTPROFILE_H
#define PGAGGREGATIONENRICHMENTPROFILE_H

@class PLDateRangeTitleGenerator, NSString, NSDictionary;
@protocol PGEnrichmentProfile;

#import <Foundation/Foundation.h>

#import "PGDejunkerDeduperOptions.h"
#import "PGManager.h"

@interface PGAggregationEnrichmentProfile : NSObject <PGEnrichmentProfile>



@property (nonatomic) BOOL collectsDebugInfo; // ivar: _collectsDebugInfo
@property (retain, nonatomic) PLDateRangeTitleGenerator *dateRangeTitleGenerator; // ivar: _dateRangeTitleGenerator
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSDictionary *debugInfos;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) PGDejunkerDeduperOptions *extendedCurationOptions; // ivar: _extendedCurationOptions
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) PGManager *manager; // ivar: _manager
@property (readonly) Class superclass;
@property (readonly, nonatomic) unsigned short targetEnrichmentState;


-(BOOL)canEnrichHighlight:(id)arg0 withOptions:(NSUInteger)arg1 ;
-(BOOL)canUseLocationInformationWithHighlightInfo:(id)arg0 graph:(id)arg1 ;
-(CGFloat)promotionScoreWithHighlightInfo:(id)arg0 ;
-(id)curationOptionsForForHighlightInfo:(id)arg0 ;
-(id)curationsWithHighlightInfo:(id)arg0 progressBlock:(id)arg1 ;
-(id)extendedCurationWithHighlightInfo:(id)arg0 progressBlock:(id)arg1 ;
-(id)highlightInfoWithHighlight:(id)arg0 graph:(id)arg1 highlightTailorContext:(id)arg2 ;
-(id)initWithManager:(id)arg0 ;
-(id)keyAssetCurationCriteriaWithHighlightInfo:(id)arg0 graph:(id)arg1 ;
-(id)keyAssetWithHighlightInfo:(id)arg0 graph:(id)arg1 progressBlock:(id)arg2 ;
-(id)momentTitleByMomentUUIDWithHighlightInfo:(id)arg0 ;
-(id)titleWithHighlightInfo:(id)arg0 curatedAssets:(id)arg1 keyAsset:(id)arg2 createVerboseTitle:(BOOL)arg3 ;
-(unsigned short)enrichmentStateWithHighlightInfo:(id)arg0 ;


@end


#endif