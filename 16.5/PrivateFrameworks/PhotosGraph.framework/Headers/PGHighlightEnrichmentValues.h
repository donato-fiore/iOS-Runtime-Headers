// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGHIGHLIGHTENRICHMENTVALUES_H
#define PGHIGHLIGHTENRICHMENTVALUES_H

@class NSArray, PHAsset, NSNumber, NSDictionary, NSString, NSMapTable;
@protocol PGHighlightModel;

#import <Foundation/Foundation.h>


@interface PGHighlightEnrichmentValues : NSObject

@property (nonatomic) BOOL clearCurations; // ivar: _clearCurations
@property (nonatomic) unsigned short enrichmentState; // ivar: _enrichmentState
@property (retain, nonatomic) NSArray *extendedCuration; // ivar: _extendedCuration
@property (readonly) BOOL hasChanges;
@property (readonly, nonatomic) NSObject<PGHighlightModel> *highlight; // ivar: _highlight
@property (retain, nonatomic) PHAsset *keyAssetPrivate; // ivar: _keyAssetPrivate
@property (retain, nonatomic) PHAsset *keyAssetShared; // ivar: _keyAssetShared
@property (copy, nonatomic) NSNumber *mixedSharingCompositionKeyAssetRelationshipValue; // ivar: _mixedSharingCompositionKeyAssetRelationshipValue
@property (retain, nonatomic) NSDictionary *momentTitleByMomentUUID; // ivar: _momentTitleByMomentUUID
@property (nonatomic) NSUInteger mood; // ivar: _mood
@property (nonatomic) CGFloat promotionScore; // ivar: _promotionScore
@property (copy, nonatomic) NSString *smartDescriptionMixed; // ivar: _smartDescriptionMixed
@property (copy, nonatomic) NSString *smartDescriptionPrivate; // ivar: _smartDescriptionPrivate
@property (copy, nonatomic) NSString *smartDescriptionShared; // ivar: _smartDescriptionShared
@property (retain, nonatomic) NSArray *summaryCuration; // ivar: _summaryCuration
@property (copy, nonatomic) NSString *verboseSmartDescriptionMixed; // ivar: _verboseSmartDescriptionMixed
@property (copy, nonatomic) NSString *verboseSmartDescriptionPrivate; // ivar: _verboseSmartDescriptionPrivate
@property (copy, nonatomic) NSString *verboseSmartDescriptionShared; // ivar: _verboseSmartDescriptionShared
@property (retain, nonatomic) NSMapTable *visibilityScoreByAsset; // ivar: _visibilityScoreByAsset


-(id)initWithHighlight:(id)arg0 ;


@end


#endif