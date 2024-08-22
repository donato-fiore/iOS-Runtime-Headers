// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CVAPORTRAITGENERICREQUESTIMPL_H
#define CVAPORTRAITGENERICREQUESTIMPL_H

@class NSString;
@protocol CVAPortraitGenericRequest, CVABackgroundRequest, CVALightRequest, CVAPostProcessingRequest;

#import <Foundation/Foundation.h>


@interface CVAPortraitGenericRequestImpl : NSObject <CVAPortraitGenericRequest>



@property (retain) NSObject<CVABackgroundRequest> *background; // ivar: _background
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property BOOL isTmpConfig; // ivar: _isTmpConfig
@property (retain) NSObject<CVALightRequest> *light; // ivar: _light
@property (retain) NSObject<CVAPostProcessingRequest> *post; // ivar: _post
@property (readonly) Class superclass;




@end


#endif