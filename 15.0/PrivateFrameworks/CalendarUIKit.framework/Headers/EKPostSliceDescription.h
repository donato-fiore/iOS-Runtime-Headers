// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EKPOSTSLICEDESCRIPTION_H
#define EKPOSTSLICEDESCRIPTION_H



#import "EKSliceDescription.h"
#import "EKSeriesDetails.h"

@interface EKPostSliceDescription : EKSliceDescription

@property (copy) EKSeriesDetails *createdSeriesDetails; // ivar: _createdSeriesDetails
@property (copy) EKSeriesDetails *updatedMainSeriesDetails; // ivar: _updatedMainSeriesDetails


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif