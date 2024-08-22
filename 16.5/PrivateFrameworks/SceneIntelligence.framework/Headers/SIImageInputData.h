// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIIMAGEINPUTDATA_H
#define SIIMAGEINPUTDATA_H

@class NSString;
@protocol SIData;

#import <Foundation/Foundation.h>

#import "SIPixelBufferWrapper.h"

@interface SIImageInputData : NSObject <SIData>

 {
    SIPixelBufferWrapper *_inputImageBufferWrapper;
    SIPixelBufferWrapper *_inputDepthBufferWrapper;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) *__CVBuffer inputDepthBuffer;
@property (nonatomic) *__CVBuffer inputImageBuffer;
@property (readonly) Class superclass;
@property (nonatomic) CGFloat timestamp; // ivar: _timestamp


-(id)init;


@end


#endif