// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMIAPPROXIMATEMEDIANIMAGE_H
#define HMIAPPROXIMATEMEDIANIMAGE_H

@class HMFObject, CIContext, NSMutableArray, CIImage;
@protocol HMIAggregateImage;



@interface HMIApproximateMedianImage : HMFObject <HMIAggregateImage>



@property (readonly) CIContext *context; // ivar: _context
@property (readonly) NSUInteger imageCount;
@property (retain) NSMutableArray *images; // ivar: _images
@property (retain) CIImage *medianImage; // ivar: _medianImage


-(id)approximateMedianWithImages:(id)arg0 ;
-(id)computedMedianImage;
-(id)init;
-(id)outputImage;
-(void)addImage:(id)arg0 ;
-(void)reset;


@end


#endif