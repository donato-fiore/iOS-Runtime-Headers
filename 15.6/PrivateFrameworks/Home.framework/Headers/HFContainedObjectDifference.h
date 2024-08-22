// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFCONTAINEDOBJECTDIFFERENCE_H
#define HFCONTAINEDOBJECTDIFFERENCE_H



#import "HFDifference.h"
#import "HFComparisonResult.h"

@interface HFContainedObjectDifference : HFDifference

@property (retain, nonatomic) HFComparisonResult *containedObjectResult; // ivar: _containedObjectResult


+(id)containedObjectDifferenceWithKey:(id)arg0 comparisonResult:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilder;


@end


#endif