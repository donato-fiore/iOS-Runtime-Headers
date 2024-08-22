// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSTGROUPINGCOLUMN_H
#define TSTGROUPINGCOLUMN_H

@class TSKSosBase, TSKFormat, TSULocale;
@protocol NSCopying;



@interface TSTGroupingColumn : TSKSosBase <NSCopying>

 {
    UUIDData<TSP::UUIDData> _groupingColumnUid;
    UUIDData<TSP::UUIDData> _columnUid;
    TSKFormat *_groupingFormat;
    BOOL _groupingFormatComputed;
    TSULocale *_docLocale;
}


@property (readonly, nonatomic) TSKUIDStruct columnUid;
@property (readonly, nonatomic) TSKUIDStruct groupingColumnUid;
@property (readonly, nonatomic) *TSCEFunctor groupingFunctor; // ivar: _groupingFunctor
@property (readonly, nonatomic) NSInteger groupingType; // ivar: _groupingType
@property (readonly, nonatomic) TSKUIDStruct uniqueObjectUID; // ivar: _uniqueObjectUID


+(BOOL)groupingTypeIsAnyDateType:(NSInteger)arg0 ;
+(NSInteger)coarserGroupingTypeFor:(NSInteger)arg0 ;
+(NSInteger)coarserGroupingTypeFor:(NSInteger)arg0 groupTypesToAvoid:(id)arg1 ;
+(NSInteger)finerGroupingTypeFor:(NSInteger)arg0 ;
+(NSInteger)finerGroupingTypeFor:(NSInteger)arg0 groupTypesToAvoid:(id)arg1 ;
+(id)shortStringForDayOfWeekType;
+(id)shortStringForDayOfWeekTypeForLocale:(id)arg0 ;
+(id)shortStringForDayType;
+(id)shortStringForDayTypeForLocale:(id)arg0 ;
+(id)shortStringForGroupingType:(NSInteger)arg0 ;
+(id)shortStringForGroupingType:(NSInteger)arg0 locale:(id)arg1 ;
+(id)shortStringForMonthOfYearType;
+(id)shortStringForMonthOfYearTypeForLocale:(id)arg0 ;
+(id)shortStringForMonthType;
+(id)shortStringForMonthTypeForLocale:(id)arg0 ;
+(id)shortStringForQuarterOfYearType;
+(id)shortStringForQuarterOfYearTypeForLocale:(id)arg0 ;
+(id)shortStringForYearQuarterType;
+(id)shortStringForYearQuarterTypeForLocale:(id)arg0 ;
+(id)shortStringForYearType;
+(id)shortStringForYearTypeForLocale:(id)arg0 ;
+(id)shortStringForYearWeekType;
+(id)shortStringForYearWeekTypeForLocale:(id)arg0 ;
+(id)stringForDayOfWeekType;
+(id)stringForDayOfWeekTypeForLocale:(id)arg0 ;
+(id)stringForDayType;
+(id)stringForDayTypeForLocale:(id)arg0 ;
+(id)stringForGroupingType:(NSInteger)arg0 ;
+(id)stringForGroupingType:(NSInteger)arg0 locale:(id)arg1 ;
+(id)stringForMonthOfYearType;
+(id)stringForMonthOfYearTypeForLocale:(id)arg0 ;
+(id)stringForMonthType;
+(id)stringForMonthTypeForLocale:(id)arg0 ;
+(id)stringForQuarterOfYearType;
+(id)stringForQuarterOfYearTypeForLocale:(id)arg0 ;
+(id)stringForUniqueType;
+(id)stringForUniqueTypeForLocale:(id)arg0 ;
+(id)stringForYearQuarterType;
+(id)stringForYearQuarterTypeForLocale:(id)arg0 ;
+(id)stringForYearType;
+(id)stringForYearTypeForLocale:(id)arg0 ;
+(id)stringForYearWeekType;
+(id)stringForYearWeekTypeForLocale:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)groupValueForValue:(id)arg0 calcEngine:(id)arg1 ;
-(id)initWithArchive:(*void)arg0 ;
-(id)initWithColumnIndex:(struct TSUModelColumnIndex )arg0 groupingType:(NSInteger)arg1 inTableInfo:(id)arg2 ;
-(id)initWithColumnUid:(struct TSKUIDStruct )arg0 groupingType:(NSInteger)arg1 ;
-(id)initWithGroupingColumnUid:(struct TSKUIDStruct )arg0 columnUid:(struct TSKUIDStruct )arg1 groupingType:(NSInteger)arg2 ;
-(id)p_groupingFormatWithLocale:(id)arg0 ;
-(void)encodeToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)getUUIDBytesForColumnUid:(unsigned char)arg0 ;
-(void)getUUIDBytesForGroupingColumnUid:(unsigned char)arg0 ;
-(void)setFunctorForType;


@end


#endif