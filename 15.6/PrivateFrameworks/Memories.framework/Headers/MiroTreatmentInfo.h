// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MIROTREATMENTINFO_H
#define MIROTREATMENTINFO_H

@class NSDictionary, NSString;
@protocol AltAspect;

#import <Foundation/Foundation.h>


@interface MiroTreatmentInfo : NSObject <AltAspect>



@property (nonatomic) CGFloat altAspect; // ivar: _altAspect
@property (nonatomic) NSUInteger assignedKBStyle; // ivar: _assignedKBStyle
@property (retain, nonatomic) NSDictionary *assignedTreatmentDict; // ivar: _assignedTreatmentDict
@property (nonatomic) int assignedTreatmentStyle; // ivar: _assignedTreatmentStyle
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) int requiredTreatmentStyle; // ivar: _requiredTreatmentStyle
@property (readonly) Class superclass;
@property (nonatomic) BOOL treatmentApplied; // ivar: _treatmentApplied




@end


#endif