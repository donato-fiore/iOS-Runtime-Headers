// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXRELATEDSPEC_H
#define PXRELATEDSPEC_H



#import "PXFeatureSpec.h"

@interface PXRelatedSpec : PXFeatureSpec

@property (readonly, nonatomic) CGSize interEntrySpacing; // ivar: _interEntrySpacing
@property (readonly, nonatomic) NSInteger numberOfColumns; // ivar: _numberOfColumns


-(id)createViewSpecWithDescriptor:(struct PXViewSpecDescriptor )arg0 ;
-(id)initWithExtendedTraitCollection:(id)arg0 options:(NSUInteger)arg1 ;


@end


#endif