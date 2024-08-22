// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTTREATMENTCONTEXT_H
#define MTTREATMENTCONTEXT_H

@class NSDictionary;

#import <Foundation/Foundation.h>

#import "MTTreatment.h"

@interface MTTreatmentContext : NSObject

@property (retain, nonatomic) NSDictionary *metrics; // ivar: _metrics
@property (retain, nonatomic) MTTreatment *treatment; // ivar: _treatment


-(id)initWithTreatment:(id)arg0 metrics:(id)arg1 ;


@end


#endif