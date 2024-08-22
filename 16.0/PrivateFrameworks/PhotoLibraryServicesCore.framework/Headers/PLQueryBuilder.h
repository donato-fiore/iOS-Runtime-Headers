// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLQUERYBUILDER_H
#define PLQUERYBUILDER_H


#import <Foundation/Foundation.h>

#import "PLQuery.h"

@interface PLQueryBuilder : NSObject {
    PLQuery *_query;
}




+(id)_combineFirstQuery:(id)arg0 secondQuery:(id)arg1 conjunction:(int)arg2 ;
+(id)andCombineFirstQuery:(id)arg0 secondQuery:(id)arg1 ;
+(id)notQuery:(id)arg0 ;
+(id)orCombineFirstQuery:(id)arg0 secondQuery:(id)arg1 ;
+(id)validComparatorsForQueryKey:(int)arg0 ;
+(id)validUnitValuesForQueryKey:(int)arg0 ;
-(BOOL)_isValidCircularRegionComparator:(int)arg0 ;
-(BOOL)_isValidDateKey:(int)arg0 ;
-(BOOL)_isValidNumericComparator:(int)arg0 ;
-(BOOL)_isValidStringComparator:(int)arg0 ;
-(BOOL)_validIsEmptyQueryKey:(int)arg0 ;
-(id)initWithConjunction:(int)arg0 ;
-(id)query;
-(void)_addCircularRegionQueryKey:(int)arg0 circularRegionValue:(id)arg1 comparator:(int)arg2 ;
-(void)_addDateUnitQueryForKey:(int)arg0 withValue:(id)arg1 withType:(int)arg2 withUnit:(int)arg3 exclude:(BOOL)arg4 ;
-(void)_addQueryForKey:(int)arg0 withValue:(id)arg1 withType:(int)arg2 withComparator:(int)arg3 ;
-(void)_addQueryWithKey:(int)arg0 firstValue:(id)arg1 secondValue:(id)arg2 valueType:(int)arg3 unit:(int)arg4 comparator:(int)arg5 ;
-(void)_addRangeQueryForKey:(int)arg0 withFirstValue:(id)arg1 withSecondValue:(id)arg2 withType:(int)arg3 ;
-(void)_addStringQueryKey:(int)arg0 stringValue:(id)arg1 comparator:(int)arg2 ;
-(void)addApertureQuery:(CGFloat)arg0 comparator:(int)arg1 ;
-(void)addApertureRangeQueryBetweenValue:(CGFloat)arg0 andValue:(CGFloat)arg1 ;
-(void)addAssetTypeQuery:(int)arg0 exclude:(BOOL)arg1 ;
-(void)addBitrateQuery:(CGFloat)arg0 comparator:(int)arg1 ;
-(void)addCameraMakeQuery:(id)arg0 comparator:(int)arg1 ;
-(void)addCameraModelQuery:(id)arg0 comparator:(int)arg1 ;
-(void)addCircularRegionQuery:(id)arg0 comparator:(int)arg1 ;
-(void)addCodecQuery:(id)arg0 comparator:(int)arg1 ;
-(void)addDateRangeQueryKey:(int)arg0 between:(id)arg1 and:(id)arg2 ;
-(void)addDescriptionQuery:(id)arg0 comparator:(int)arg1 ;
-(void)addDoubleQueryKey:(int)arg0 withValue:(CGFloat)arg1 comparator:(int)arg2 ;
-(void)addDurationQuery:(CGFloat)arg0 comparator:(int)arg1 ;
-(void)addExposureBiasQuery:(CGFloat)arg0 comparator:(int)arg1 ;
-(void)addFilenameQuery:(id)arg0 comparator:(int)arg1 ;
-(void)addFlashQuery:(BOOL)arg0 ;
-(void)addFocalLengthQuery:(CGFloat)arg0 comparator:(int)arg1 ;
-(void)addFpsQuery:(CGFloat)arg0 comparator:(int)arg1 ;
-(void)addHasLocationQuery:(BOOL)arg0 ;
-(void)addInTheLastDaysQueryKey:(int)arg0 withCount:(NSInteger)arg1 exclude:(BOOL)arg2 ;
-(void)addInTheLastMonthsQueryKey:(int)arg0 withCount:(NSInteger)arg1 exclude:(BOOL)arg2 ;
-(void)addInTheLastSecondsQueryKey:(int)arg0 withCount:(NSInteger)arg1 exclude:(BOOL)arg2 ;
-(void)addInTheLastWeeksQueryKey:(int)arg0 withCount:(NSInteger)arg1 exclude:(BOOL)arg2 ;
-(void)addInTheLastYearsQueryKey:(int)arg0 withCount:(NSInteger)arg1 exclude:(BOOL)arg2 ;
-(void)addIntegerQueryKey:(int)arg0 withValue:(NSInteger)arg1 comparator:(int)arg2 ;
-(void)addIsAdjustedQuery:(BOOL)arg0 ;
-(void)addIsAfterDateQueryKey:(int)arg0 withDate:(id)arg1 ;
-(void)addIsBeforeDateQueryKey:(int)arg0 withDate:(id)arg1 ;
-(void)addIsDateQueryKey:(int)arg0 withDate:(id)arg1 exclude:(BOOL)arg2 ;
-(void)addIsEmptyQueryForKey:(int)arg0 isEmpty:(BOOL)arg1 ;
-(void)addIsFavoriteQuery:(BOOL)arg0 ;
-(void)addIsHiddenQuery:(BOOL)arg0 ;
-(void)addIsInAlbumQuery:(id)arg0 ;
-(void)addIsInAnyAlbumQuery;
-(void)addIsProResQuery:(BOOL)arg0 ;
-(void)addIsRawQuery:(BOOL)arg0 ;
-(void)addIsReferencedMediaQuery:(BOOL)arg0 ;
-(void)addIsoQuery:(NSInteger)arg0 comparator:(int)arg1 ;
-(void)addIsoRangeQueryBetweenValue:(NSInteger)arg0 andValue:(NSInteger)arg1 ;
-(void)addKeywordQuery:(id)arg0 exclude:(BOOL)arg1 ;
-(void)addLensModelQuery:(id)arg0 comparator:(int)arg1 ;
-(void)addMeteringModeQuery:(NSInteger)arg0 comparator:(int)arg1 ;
-(void)addPersonQuery:(id)arg0 comparator:(int)arg1 ;
-(void)addPersonUUIDInMomentQuery:(id)arg0 comparator:(int)arg1 ;
-(void)addPersonUUIDQuery:(id)arg0 comparator:(int)arg1 ;
-(void)addSampleRateQuery:(NSInteger)arg0 comparator:(int)arg1 ;
-(void)addShutterSpeedQuery:(CGFloat)arg0 comparator:(int)arg1 ;
-(void)addTextQuery:(id)arg0 comparator:(int)arg1 ;
-(void)addTitleQuery:(id)arg0 comparator:(int)arg1 ;
-(void)addTrackFormatQuery:(NSInteger)arg0 comparator:(int)arg1 ;
-(void)addUnableToUploadQuery;
-(void)addWhiteBalanceQuery:(NSInteger)arg0 comparator:(int)arg1 ;


@end


#endif