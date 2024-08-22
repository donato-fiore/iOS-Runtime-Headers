// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTCONSTRAINTTREATMENTFILTER_H
#define MTCONSTRAINTTREATMENTFILTER_H

@class NSString;
@protocol MTEventFilter;


#import "MTObject.h"

@interface MTConstraintTreatmentFilter : MTObject <MTEventFilter>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)apply:(id)arg0 ;


@end


#endif