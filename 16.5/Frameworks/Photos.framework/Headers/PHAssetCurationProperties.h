// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PHASSETCURATIONPROPERTIES_H
#define PHASSETCURATIONPROPERTIES_H

@class NSData, NSArray, NSDate, NSString;


#import "PHAssetPropertySet.h"

@interface PHAssetCurationProperties : PHAssetPropertySet {
    NSData *_objectSaliencyRectsData;
    NSArray *_cachedObjectSaliencyRects;
}


@property (readonly, nonatomic) NSDate *addedDate; // ivar: _addedDate
@property (readonly, nonatomic) float behavioralScore; // ivar: _behavioralScore
@property (readonly, nonatomic) NSString *importedByBundleIdentifier; // ivar: _importedByBundleIdentifier
@property (readonly, nonatomic) NSString *importedByDisplayName; // ivar: _importedByDisplayName
@property (readonly, nonatomic) float interactionScore; // ivar: _interactionScore
@property (readonly, nonatomic) float interestingSubjectScore; // ivar: _interestingSubjectScore
@property (readonly, nonatomic) NSDate *lastSharedDate; // ivar: _lastSharedDate
@property (readonly, nonatomic) NSArray *objectSaliencyRects;
@property (readonly, nonatomic) float semanticScore; // ivar: _semanticScore
@property (readonly, nonatomic) NSString *syndicationIdentifier; // ivar: _syndicationIdentifier


+(id)entityName;
+(id)keyPathFromPrimaryObject;
+(id)keyPathToPrimaryObject;
+(id)propertiesToFetch;
+(id)propertySetName;
-(float)_semanticScoreFromBehavioralScore:(CGFloat)arg0 ;
-(id)initWithFetchDictionary:(id)arg0 asset:(id)arg1 prefetched:(BOOL)arg2 ;


@end


#endif