// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGFEATUREAUGMENTERSUPERVISEDMIXUP_H
#define PGFEATUREAUGMENTERSUPERVISEDMIXUP_H

@class NSString;
@protocol PGFeatureAugmenterSupervised;


#import "PGFeatureAugmenterMixUp.h"

@interface PGFeatureAugmenterSupervisedMixUp : PGFeatureAugmenterMixUp <PGFeatureAugmenterSupervised>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)name;
-(id)labeledFloatVectorsWithLabeledFloatVectors:(id)arg0 error:(*id)arg1 ;


@end


#endif