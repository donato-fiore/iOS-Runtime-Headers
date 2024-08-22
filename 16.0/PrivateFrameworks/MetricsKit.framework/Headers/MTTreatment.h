// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTTREATMENT_H
#define MTTREATMENT_H

@class NSDictionary;

#import <Foundation/Foundation.h>

#import "MTTreatmentAction.h"
#import "MTMetricsDataPredicate.h"

@interface MTTreatment : NSObject

@property (retain, nonatomic) MTTreatmentAction *eventAction; // ivar: _eventAction
@property (retain, nonatomic) NSDictionary *fieldActions; // ivar: _fieldActions
@property (retain, nonatomic) MTMetricsDataPredicate *predicate; // ivar: _predicate


+(id)treatmentWithConfigData:(id)arg0 ;
-(id)initWithConfigDictionary:(id)arg0 ;
-(id)performTreatment:(id)arg0 ;


@end


#endif