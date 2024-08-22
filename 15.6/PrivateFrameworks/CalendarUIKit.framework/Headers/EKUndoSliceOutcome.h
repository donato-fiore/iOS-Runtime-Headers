// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EKUNDOSLICEOUTCOME_H
#define EKUNDOSLICEOUTCOME_H

@class EKEvent;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "EKSeriesDetails.h"
#import "EKPostSliceDescription.h"

@interface EKUndoSliceOutcome : NSObject <NSCopying>



@property (copy) EKSeriesDetails *createdSeriesDetails; // ivar: _createdSeriesDetails
@property (copy) EKSeriesDetails *mainSeriesDetails; // ivar: _mainSeriesDetails
@property (copy) EKEvent *masterToDelete; // ivar: _masterToDelete
@property (readonly) EKPostSliceDescription *originalPostSliceDescription; // ivar: _originalPostSliceDescription


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif