// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SYMPTOMSTORE_H
#define SYMPTOMSTORE_H

@class NSString, NSMutableArray;

#import <Foundation/Foundation.h>


@interface SymptomStore : NSObject {
    unsigned int symptomMinRetainTime;
    unsigned int symptomMinSavedCount;
    *CGFloat symptomArrivalTimes;
    unsigned int symptomArrivalTimeNextIdx;
}


@property (retain, nonatomic) NSString *symptomDescription; // ivar: _symptomDescription
@property (retain, nonatomic) NSMutableArray *symptomHistory; // ivar: symptomHistory
@property (nonatomic) unsigned int symptomIdent; // ivar: symptomIdent
@property (retain, nonatomic) NSString *symptomKey; // ivar: symptomKey
@property (retain, nonatomic) NSString *symptomName; // ivar: symptomName


+(id)description;
+(id)descriptionFromSymptomName:(id)arg0 ;
+(id)idFromReporterName:(id)arg0 ;
+(id)idFromSymptomName:(id)arg0 ;
+(id)keyFromSymptomId:(unsigned int)arg0 ;
+(id)keyFromSymptomName:(id)arg0 ;
+(id)nameFromReporterId:(unsigned int)arg0 ;
+(id)nameFromSymptomId:(unsigned int)arg0 ;
+(id)nameFromSymptomKey:(id)arg0 ;
+(id)storeFromSymptomKey:(id)arg0 ;
+(id)storeFromSymptomName:(id)arg0 ;
+(id)storedSymptomsWithKey:(id)arg0 ;
+(int)addFromReporter:(id)arg0 ;
+(int)configure:(id)arg0 ;
+(unsigned int)numSymptomsWithKey:(id)arg0 retainTime:(unsigned int)arg1 ;
+(void)_createForName:(id)arg0 key:(id)arg1 id:(unsigned int)arg2 symptomDescription:(id)arg3 ;
+(void)initialize;
+(void)noteReceivedSymptom:(id)arg0 ;
+(void)pruneSymptomsWithKey:(id)arg0 ;
+(void)resetSymptomsWithKey:(id)arg0 ;
+(void)setRetainCount:(unsigned int)arg0 forSymptom:(id)arg1 ;
+(void)setRetainTime:(unsigned int)arg0 forSymptom:(id)arg1 ;
-(id)description;
-(unsigned int)numSymptomsWithRetainTime:(unsigned int)arg0 ;
-(void)_pruneSymptomsForDate:(id)arg0 ;
-(void)noteReceivedSymptom:(id)arg0 ;
-(void)setRetainCount:(unsigned int)arg0 ;
-(void)setRetainTime:(unsigned int)arg0 ;


@end


#endif