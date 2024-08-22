// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BWCAPTUREDEFERREDPHOTOPROCESSOR_H
#define BWCAPTUREDEFERREDPHOTOPROCESSOR_H

@class NSString;
@protocol FigCaptureDeferredProcessingJobDelegate;

#import <Foundation/Foundation.h>


@interface BWCaptureDeferredPhotoProcessor : NSObject <FigCaptureDeferredProcessingJobDelegate>

 {
    *OpaqueFigCaptureDeferredPhotoProcessor _deferredPhotoProcessor;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithFigCaptureDeferredPhotoProcessor:(struct OpaqueFigCaptureDeferredPhotoProcessor *)arg0 ;
-(void)immediateTermination;
-(void)job:(id)arg0 completedWithSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 ;
-(void)job:(id)arg0 failedWithError:(int)arg1 ;
-(void)request:(id)arg0 failedWithError:(int)arg1 ;


@end


#endif