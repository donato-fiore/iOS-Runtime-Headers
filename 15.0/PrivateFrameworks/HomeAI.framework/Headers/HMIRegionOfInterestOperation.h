// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMIREGIONOFINTERESTOPERATION_H
#define HMIREGIONOFINTERESTOPERATION_H

@class NSOperation, NSError;


#import "HMICameraVideoFrame.h"

@interface HMIRegionOfInterestOperation : NSOperation

@property (readonly) CGRect cropRect; // ivar: _cropRect
@property (readonly) NSError *error; // ivar: _error
@property (readonly, weak) HMICameraVideoFrame *frame; // ivar: _frame
@property (readonly) *__CVBuffer pixelBuffer; // ivar: _pixelBuffer
@property (readonly) CGSize size; // ivar: _size


-(id)initWithFrame:(id)arg0 size:(struct CGSize )arg1 ;
-(void)dealloc;
-(void)main;


@end


#endif