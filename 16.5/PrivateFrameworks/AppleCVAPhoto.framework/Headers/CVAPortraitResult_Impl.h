// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CVAPORTRAITRESULT_IMPL_H
#define CVAPORTRAITRESULT_IMPL_H

@class NSString;
@protocol CVAPortraitResult, CVAMattingResult;

#import <Foundation/Foundation.h>


@interface CVAPortraitResult_Impl : NSObject <CVAPortraitResult>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSObject<CVAMattingResult> *mattingResult; // ivar: _mattingResult
@property (readonly) *__CVBuffer portraitPixelBuffer; // ivar: _portraitPixelBuffer
@property (readonly) float portraitStability; // ivar: _portraitStability
@property (readonly) float relightingStability; // ivar: _relightingStability
@property (readonly) Class superclass;


-(id)initWithMattingResult:(id)arg0 portraitPixelBuffer:(struct __CVBuffer *)arg1 portraitStability:(float)arg2 ;
-(id)initWithMattingResult:(id)arg0 portraitPixelBuffer:(struct __CVBuffer *)arg1 portraitStability:(float)arg2 relightingStability:(float)arg3 ;
-(void)dealloc;


@end


#endif