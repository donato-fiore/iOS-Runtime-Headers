// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGDEFAULTENRICHMENTPROFILE_H
#define PGDEFAULTENRICHMENTPROFILE_H

@class NSString, NSDictionary;
@protocol PGEnrichmentProfile;

#import <Foundation/Foundation.h>

#import "PGCurationOptions.h"
#import "PGDejunkerDeduperOptions.h"
#import "PGKeyAssetCurationOptions.h"
#import "PGManager.h"

@interface PGDefaultEnrichmentProfile : NSObject <PGEnrichmentProfile>



@property (nonatomic) BOOL collectsDebugInfo; // ivar: _collectsDebugInfo
@property (readonly, nonatomic) PGCurationOptions *curationOptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSDictionary *debugInfos; // ivar: _debugInfos
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) PGDejunkerDeduperOptions *extendedCurationOptions; // ivar: _extendedCurationOptions
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) PGKeyAssetCurationOptions *keyAssetCurationOptions;
@property (readonly, nonatomic) PGManager *manager; // ivar: _manager
@property (readonly) Class superclass;
@property (readonly, nonatomic) unsigned short targetEnrichmentState;


+(NSInteger)cardinalModeForSummary;
+(NSUInteger)durationForSummary;
-(BOOL)canEnrichHighlight:(id)arg0 withOptions:(NSUInteger)arg1 ;
-(BOOL)canUseLocationInformationWithHighlightInfo:(id)arg0 graph:(id)arg1 ;
-(CGFloat)promotionScoreWithHighlightInfo:(id)arg0 ;
-(id)curationOptionsForForHighlightInfo:(id)arg0 sharingFilter:(unsigned short)arg1 ;
-(id)debugInfoDictionaryByAddingItemInfosToDebugInfo:(id)arg0 ;
-(id)extendedCurationWithHighlightInfo:(id)arg0 sharingFilter:(unsigned short)arg1 progressBlock:(id)arg2 ;
-(id)faceInfosWithAsset:(id)arg0 ;
-(id)highlightInfoWithHighlight:(id)arg0 graph:(id)arg1 highlightTailorContext:(id)arg2 ;
-(id)initWithManager:(id)arg0 ;
-(id)keyAssetCurationCriteriaWithHighlightInfo:(id)arg0 graph:(id)arg1 ;
-(id)keyAssetWithHighlightInfo:(id)arg0 sharingFilter:(unsigned short)arg1 graph:(id)arg2 progressBlock:(id)arg3 ;
-(id)momentTitleByMomentUUIDWithHighlightInfo:(id)arg0 ;
-(id)summaryCurationWithHighlightInfo:(id)arg0 sharingFilter:(unsigned short)arg1 progressBlock:(id)arg2 ;
-(id)titleWithHighlightInfo:(id)arg0 sharingFilter:(unsigned short)arg1 curatedAssets:(id)arg2 keyAsset:(id)arg3 createVerboseTitle:(BOOL)arg4 ;
-(unsigned short)enrichmentStateWithHighlightInfo:(id)arg0 ;


@end


#endif