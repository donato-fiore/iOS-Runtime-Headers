// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EKSLICEDESCRIPTION_H
#define EKSLICEDESCRIPTION_H

@class EKEvent;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "EKSeriesDetails.h"

@interface EKSliceDescription : NSObject <NSCopying>



@property (retain) EKEvent *originalEventToSliceOn; // ivar: _originalEventToSliceOn
@property (retain) EKSeriesDetails *originalMainSeriesDetails; // ivar: _originalMainSeriesDetails


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif