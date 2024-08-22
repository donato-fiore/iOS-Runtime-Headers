// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef JETREATMENTCONTEXT_H
#define JETREATMENTCONTEXT_H

@class NSDictionary;

#import <Foundation/Foundation.h>

#import "JETreatment.h"

@interface JETreatmentContext : NSObject {
    JETreatment *_treatment;
    NSDictionary *_metrics;
}




-(id)initWithTreatment:(id)arg0 metrics:(id)arg1 ;


@end


#endif