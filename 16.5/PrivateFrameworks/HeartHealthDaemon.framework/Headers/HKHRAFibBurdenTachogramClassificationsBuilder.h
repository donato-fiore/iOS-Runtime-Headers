// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKHRAFIBBURDENTACHOGRAMCLASSIFICATIONSBUILDER_H
#define HKHRAFIBBURDENTACHOGRAMCLASSIFICATIONSBUILDER_H

@class HDProfile, NSMutableDictionary;
@protocol HKHRAFibBurdenTachogramClassifier, OS_dispatch_group, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface HKHRAFibBurdenTachogramClassificationsBuilder : NSObject {
    HDProfile *_profile;
    id<HKHRAFibBurdenTachogramClassifier> *_classifier;
    NSMutableDictionary *_julianDayToClassifications;
    NSObject<OS_dispatch_group> *_group;
    NSObject<OS_dispatch_queue> *_queue;
}




-(id)buildClassifications;
-(id)buildClassificationsAndWaitForNewClassificationSaves:(BOOL)arg0 ;
-(id)classificationForSample:(id)arg0 ;
-(id)initWithProfile:(id)arg0 classifier:(id)arg1 ;
-(void)_saveNewClassification:(id)arg0 ;
-(void)addSampleToClassify:(id)arg0 dayIndex:(NSInteger)arg1 ;


@end


#endif