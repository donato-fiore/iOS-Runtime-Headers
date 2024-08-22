// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EKSLICEDESCRIPTION_H
#define EKSLICEDESCRIPTION_H

@class EKEvent;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "EKSeriesDetails.h"

@interface EKSliceDescription : NSObject <NSCopying>

 {
    EKEvent *_originalEventToSliceOn;
}


@property (retain) EKEvent *originalEventToSliceOn;
@property (retain) EKSeriesDetails *originalMainSeriesDetails; // ivar: _originalMainSeriesDetails


+(id)sliceDescriptionForSlicingEvent:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;


@end


#endif