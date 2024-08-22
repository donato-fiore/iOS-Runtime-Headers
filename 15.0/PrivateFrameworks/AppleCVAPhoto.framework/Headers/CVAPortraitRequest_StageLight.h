// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CVAPORTRAITREQUEST_STAGELIGHT_H
#define CVAPORTRAITREQUEST_STAGELIGHT_H

@class NSData, NSString;
@protocol CVAPortraitRequest, CVAPortraitGenericRequest;

#import <Foundation/Foundation.h>

#import "CVAMattingRequest.h"

@interface CVAPortraitRequest_StageLight : NSObject <CVAPortraitRequest>



@property (readonly) NSData *cubeData; // ivar: _cubeData
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) *__CVBuffer destinationColorPixelBuffer; // ivar: _destinationColorPixelBuffer
@property (readonly) NSUInteger hash;
@property (readonly) CVAMattingRequest *mattingRequest; // ivar: _mattingRequest
@property (retain) NSObject<CVAPortraitGenericRequest> *parentGenericRequestFrom; // ivar: _parentGenericRequestFrom
@property (retain) NSObject<CVAPortraitGenericRequest> *parentGenericRequestTo; // ivar: _parentGenericRequestTo
@property (readonly) NSData *proxyCubeData; // ivar: _proxyCubeData
@property (readonly) float stageLightIntensity; // ivar: _stageLightIntensity
@property (readonly) Class superclass;
@property (readonly) float vignetteIntensity; // ivar: _vignetteIntensity


-(id)initWithMattingRequest:(id)arg0 destinationColorPixelBuffer:(struct __CVBuffer *)arg1 proxyCubeData:(id)arg2 cubeData:(id)arg3 vignetteIntensity:(float)arg4 stageLightIntensity:(float)arg5 ;
-(void)dealloc;


@end


#endif