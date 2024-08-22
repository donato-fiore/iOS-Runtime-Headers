// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PRSL2FEATUREVECTOR_H
#define PRSL2FEATUREVECTOR_H

@class NSString, NSDictionary;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PRSL2FeatureVector : NSObject <NSCopying>

 {
    PRSL2FeatureScoreSmallCache _cache;
    *void _featureData;
    unsigned short _featureDataSize;
    unsigned char _flags;
    unsigned char _values;
}


@property (retain, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (retain, nonatomic) NSString *device_type; // ivar: _device_type
@property (nonatomic) BOOL displayNameFuzzySpecialInsertion;
@property (nonatomic) float experimentalScore; // ivar: _experimentalScore
@property (nonatomic) unk indexScore; // ivar: _indexScore
@property (nonatomic) BOOL isAppInDock;
@property (nonatomic) BOOL isSiriAction;
@property (nonatomic) float originalL2Score; // ivar: _originalL2Score
@property (readonly, nonatomic) BOOL receiverIsVip;
@property (retain, nonatomic) NSDictionary *roundTripFeatures; // ivar: _roundTripFeatures
@property (retain, nonatomic) NSDictionary *searchThroughCEPData; // ivar: _searchThroughCEPData
@property (readonly, nonatomic) BOOL senderIsVip;
@property (readonly, nonatomic) BOOL vipSenderMatchesQuery;
@property (nonatomic) float withinBundleScore; // ivar: _withinBundleScore


+(id)contextWithFeatureOrder:(id)arg0 withInflation:(NSUInteger)arg1 withInflatedIndexToSize:(id)arg2 ;
+(struct FeatureInfo *)featureForName:(id)arg0 ;
+(struct __CFSet *)getL2FeatureSet;
+(void)initialize;
-(*float)getAllScores:(float)arg0 ;
-(BOOL)serializeToJSON:(*void)arg0 options:(NSInteger)arg1 ;
-(float)scoreForFeature:(unsigned short)arg0 ;
-(id)_dictionaryRepresentationWithoutDefaultValues:(BOOL)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)dictionaryRepresentationWithoutDefaultValues;
-(id)init;
-(id)initWithCache:(struct PRSL2FeatureScoreSmallCache )arg0 featureData:(*void)arg1 featureDataSize:(unsigned short)arg2 flags:(unsigned char)arg3 values:(unsigned char)arg4 ;
-(void)cleanup;
-(void)dealloc;
-(void)restoreFromJazzkonPlusHacks:(*float)arg0 ;
-(void)setAllDisplayNameFeatures:(*float)arg0 withValue:(float)arg1 ;
-(void)setScores:(*float)arg0 forFeatures:(*unsigned short)arg1 count:(NSUInteger)arg2 ;
-(void)swapAllContentCreationDateFeatures:(*float)arg0 ;
-(void)swapAllLastUsedDateFeatures:(*float)arg0 ;
-(void)swapAllRecenyFeatures:(*float)arg0 ;
-(void)swapFeature:(unsigned short)arg0 withSubstitute:(unsigned short)arg1 scores:(*float)arg2 ;


@end


#endif