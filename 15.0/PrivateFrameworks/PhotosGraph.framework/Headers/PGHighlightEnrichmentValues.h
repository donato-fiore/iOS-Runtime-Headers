// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGHIGHLIGHTENRICHMENTVALUES_H
#define PGHIGHLIGHTENRICHMENTVALUES_H

@class NSDictionary, NSString, NSArray, PHAsset, NSMapTable;
@protocol PGHighlightModel;

#import <Foundation/Foundation.h>


@interface PGHighlightEnrichmentValues : NSObject

@property (nonatomic) BOOL clearCurations; // ivar: _clearCurations
@property (retain, nonatomic) NSDictionary *curatedAssetsByCurationType; // ivar: _curatedAssetsByCurationType
@property (copy, nonatomic) NSString *dateDescription; // ivar: _dateDescription
@property (nonatomic) unsigned short enrichmentState; // ivar: _enrichmentState
@property (retain, nonatomic) NSArray *extendedCuration; // ivar: _extendedCuration
@property (readonly) BOOL hasChanges;
@property (readonly) NSObject<PGHighlightModel> *highlight; // ivar: _highlight
@property (retain, nonatomic) PHAsset *keyAsset; // ivar: _keyAsset
@property (retain, nonatomic) NSDictionary *momentTitleByMomentUUID; // ivar: _momentTitleByMomentUUID
@property (nonatomic) NSUInteger mood; // ivar: _mood
@property (nonatomic) CGFloat promotionScore; // ivar: _promotionScore
@property (copy, nonatomic) NSString *smartDescription; // ivar: _smartDescription
@property (copy, nonatomic) NSString *verboseSmartDescription; // ivar: _verboseSmartDescription
@property (retain, nonatomic) NSMapTable *visibilityScoreByAsset; // ivar: _visibilityScoreByAsset


-(id)initWithHighlight:(id)arg0 ;


@end


#endif