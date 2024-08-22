// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SGDEDUPER_H
#define SGDEDUPER_H


#import <Foundation/Foundation.h>


@interface SGDeduper : NSObject



+(BOOL)eventsHaveSimilarTitles:(id)arg0 ekEventFromStore:(id)arg1 ;
+(id)_dedupeGenericContactDetails:(id)arg0 ;
+(id)_dedupePostalAddresses:(id)arg0 ;
+(id)bucketerWithEqualityTest:(SEL)arg0 ;
+(id)bucketerWithLabeledBuckets:(SEL)arg0 ;
+(id)bucketerWithMapping:(SEL)arg0 ;
// +(id)dedupe:(id)arg0 bucketer:(id)arg1 resolver:(unk)arg2  ;
+(id)dedupeContactDetails:(id)arg0 ;
+(id)resolveByPairs:(SEL)arg0 ;
+(id)resolveByScoreBreakTiesArbitrarily:(SEL)arg0 ;
+(id)resolveSGContactDetailsPreferringPhraseExtractionsAndLabels:(SEL)arg0 ;
+(id)splitContactDetailsByType:(id)arg0 ;
+(unsigned char)eventsHaveIdenticalReservationIds:(id)arg0 ekEventFromStore:(id)arg1 ;
+(void)enumerateEKEventsForPseudoEventBySimilarStartAndEndTime:(id)arg0 store:(id)arg1 usingBlock:(id)arg2 ;


@end


#endif