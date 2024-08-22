// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef JETREATMENT_H
#define JETREATMENT_H

@class NSDictionary;

#import <Foundation/Foundation.h>

#import "JEMetricsDataPredicate.h"
#import "JETreatmentAction.h"

@interface JETreatment : NSObject {
    JEMetricsDataPredicate *_predicate;
    JETreatmentAction *_eventAction;
    NSDictionary *_fieldActions;
}




+(id)treatmentWithConfiguration:(id)arg0 topic:(id)arg1 ;
-(id)initWithConfigDictionary:(id)arg0 topic:(id)arg1 ;
-(id)performTreatment:(id)arg0 ;


@end


#endif