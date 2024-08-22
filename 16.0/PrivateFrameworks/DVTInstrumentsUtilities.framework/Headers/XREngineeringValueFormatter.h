// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef XRENGINEERINGVALUEFORMATTER_H
#define XRENGINEERINGVALUEFORMATTER_H

@class NSFormatter, NSNumberFormatter, NSDateFormatter, NSMeasurementFormatter, NSDate, NSTimeZone;



@interface XREngineeringValueFormatter : NSFormatter {
    NSNumberFormatter *_countFormatter;
    NSNumberFormatter *_intIDFormatter;
    NSNumberFormatter *_fpsFormatter;
    NSNumberFormatter *_fixedDecimalFormatter;
    NSNumberFormatter *_countersFormulaResultFormatter;
    NSDateFormatter *_timeOfDayFormatter;
    NSMeasurementFormatter *_measurementFormatter;
}


@property (nonatomic) BOOL displaysFullBacktrace;
@property (nonatomic, getter=isHighestResolutionTimeEnabled) BOOL highestResolutionTimeEnabled; // ivar: _highestResolutionTimeEnabled
@property (nonatomic, getter=isMultiline) BOOL multiline; // ivar: _multiline
@property (retain, nonatomic) NSDate *offsetForRelativeTimes; // ivar: _offsetForRelativeTimes
@property (retain, nonatomic) NSTimeZone *timeOfDayTimeZone;
@property (nonatomic) BOOL useSimplifiedPlaceholder; // ivar: _useSimplifiedPlaceholder
@property (readonly, nonatomic) BOOL withinNarrative; // ivar: _withinNarrative


+(id)networkAddressStringFromSockaddr:(*void)arg0 length:(NSUInteger)arg1 resolveHostName:(id)arg2 ;
-(BOOL)getObjectValue:(*id)arg0 forString:(id)arg1 errorDescription:(*id)arg2 ;
-(BOOL)getTitleAndSubtitleForCoreEngineeringValue:(id)arg0 title:(*id)arg1 subtitle:(*id)arg2 ;
-(BOOL)getTitleAndSubtitleForEngineeringValue:(id)arg0 title:(*id)arg1 subtitle:(*id)arg2 ;
-(BOOL)getTitleAndSubtitleForProcessEngineeringValue:(id)arg0 title:(*id)arg1 subtitle:(*id)arg2 ;
-(BOOL)getTitleAndSubtitleForSwiftActorEngineeringValue:(id)arg0 title:(*id)arg1 subtitle:(*id)arg2 ;
-(BOOL)getTitleAndSubtitleForSwiftTaskEngineeringValue:(id)arg0 title:(*id)arg1 subtitle:(*id)arg2 ;
-(BOOL)getTitleAndSubtitleForSwiftTaskPriorityEngineeringValue:(id)arg0 title:(*id)arg1 subtitle:(*id)arg2 ;
-(BOOL)getTitleAndSubtitleForThreadEngineeringValue:(id)arg0 title:(*id)arg1 subtitle:(*id)arg2 ;
-(BOOL)getTitleAndSubtitleForURLSessionEngineeringValue:(id)arg0 title:(*id)arg1 subtitle:(*id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)init;
-(id)stringForBacktraceEngineeringValue:(id)arg0 ;
-(id)stringForCallSiteEngineeringValue:(id)arg0 ;
-(id)stringForCoreProfileBacktraceEngineeringValue:(id)arg0 ;
-(id)stringForEngineeringValue:(id)arg0 ;
-(id)stringForInstrumentTypeEngineeringValue:(id)arg0 ;
-(id)stringForObjectValue:(id)arg0 ;
-(id)stringForSocketAddrEngineeringValue:(id)arg0 ;
-(id)stringForSwiftTaskNameUsingTextSymbolEngineeringValue:(id)arg0 andTextSymbolBacktrace:(id)arg1 ;
-(id)stringForTextSymbolEngineeringValue:(id)arg0 shouldIncludeLibrary:(BOOL)arg1 ;
-(id)stringForUserIDEngineeringValue:(id)arg0 ;
-(id)typeStringForEngineeringValue:(id)arg0 ;


@end


#endif