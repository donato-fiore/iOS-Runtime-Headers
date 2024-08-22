// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMIAVERAGEIMAGE_H
#define HMIAVERAGEIMAGE_H

@class HMFObject, CIContext, CIImage;
@protocol HMIAggregateImage;



@interface HMIAverageImage : HMFObject <HMIAggregateImage>



@property (readonly) CIContext *context; // ivar: _context
@property (retain) CIImage *currentAverage; // ivar: _currentAverage
@property float decay; // ivar: _decay
@property (readonly) NSUInteger imageCount;
@property NSInteger numImages; // ivar: _numImages


-(id)init;
-(id)initWithDecay:(float)arg0 ;
-(id)outputImage;
-(void)addImage:(id)arg0 ;
-(void)reset;


@end


#endif