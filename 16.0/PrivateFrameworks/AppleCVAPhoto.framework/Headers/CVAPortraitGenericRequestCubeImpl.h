// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CVAPORTRAITGENERICREQUESTCUBEIMPL_H
#define CVAPORTRAITGENERICREQUESTCUBEIMPL_H

@class NSData, NSString;
@protocol CVAPortraitGenericRequest, CVAPortraitVideoPipeline;

#import <Foundation/Foundation.h>


@interface CVAPortraitGenericRequestCubeImpl : NSObject <CVAPortraitGenericRequest>



@property (retain) NSData *cubeData; // ivar: _cubeData
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) NSObject<CVAPortraitVideoPipeline> *portraitVideoPipeline; // ivar: _portraitVideoPipeline
@property *__CVBuffer sourceColorPixelBuffer; // ivar: _sourceColorPixelBuffer
@property (readonly) Class superclass;


-(void)dealloc;


@end


#endif