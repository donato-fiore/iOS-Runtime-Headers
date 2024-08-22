// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CVAPORTRAITREQUEST_H
#define CVAPORTRAITREQUEST_H

@class NSData, NSString;
@protocol CVAPortraitRequest, CVAPortraitGenericRequest;

#import <Foundation/Foundation.h>

#import "CVAMattingRequest.h"

@interface CVAPortraitRequest : NSObject <CVAPortraitRequest>



@property (readonly) NSData *backgroundColorCube; // ivar: _backgroundColorCube
@property (readonly) float colorCubeIntensity; // ivar: _colorCubeIntensity
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) *__CVBuffer destinationColorPixelBuffer; // ivar: _destinationColorPixelBuffer
@property (readonly) NSData *foregroundColorCube; // ivar: _foregroundColorCube
@property (readonly) NSUInteger hash;
@property (readonly) CVAMattingRequest *mattingRequest; // ivar: _mattingRequest
@property (retain) NSObject<CVAPortraitGenericRequest> *parentGenericRequestFrom; // ivar: _parentGenericRequestFrom
@property (retain) NSObject<CVAPortraitGenericRequest> *parentGenericRequestTo; // ivar: _parentGenericRequestTo
@property (readonly) int relightingCondition; // ivar: _relightingCondition
@property (readonly) float simulatedFocalRatio; // ivar: _simulatedFocalRatio
@property (readonly) float sourceColorGain; // ivar: _sourceColorGain
@property (readonly) float sourceColorLux; // ivar: _sourceColorLux
@property (readonly) Class superclass;


-(id)initWithMattingRequest:(id)arg0 destinationColorPixelBuffer:(struct __CVBuffer *)arg1 backgroundColorCube:(id)arg2 foregroundColorCube:(id)arg3 colorCubeIntensity:(float)arg4 simulatedFocalRatio:(float)arg5 sourceColorGain:(float)arg6 sourceColorLux:(float)arg7 ;
-(void)dealloc;


@end


#endif