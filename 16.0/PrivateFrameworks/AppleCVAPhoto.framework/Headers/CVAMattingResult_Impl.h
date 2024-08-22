// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CVAMATTINGRESULT_IMPL_H
#define CVAMATTINGRESULT_IMPL_H

@class NSString;
@protocol CVAMattingResult, CVADisparityPostprocessingResult;

#import <Foundation/Foundation.h>


@interface CVAMattingResult_Impl : NSObject <CVAMattingResult>



@property (readonly) *__CVBuffer alphaMattePixelBuffer; // ivar: _alphaMattePixelBuffer
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSObject<CVADisparityPostprocessingResult> *disparityPostprocessingResult; // ivar: _disparityPostprocessingResult
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithDisparityPostprocessingResult:(id)arg0 alphaMattePixelBuffer:(struct __CVBuffer *)arg1 ;
-(void)dealloc;


@end


#endif