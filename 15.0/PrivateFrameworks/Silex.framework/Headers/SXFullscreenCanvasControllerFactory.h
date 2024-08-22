// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SXFULLSCREENCANVASCONTROLLERFACTORY_H
#define SXFULLSCREENCANVASCONTROLLERFACTORY_H

@class NSString;
@protocol SXFullscreenCanvasControllerFactory, SXFullscreenCaptionViewFactory, SXMediaSharingPolicyProvider, SXPresentationAttributesProvider;

#import <Foundation/Foundation.h>


@interface SXFullscreenCanvasControllerFactory : NSObject <SXFullscreenCanvasControllerFactory>



@property (readonly, nonatomic) NSObject<SXFullscreenCaptionViewFactory> *captionViewFactory; // ivar: _captionViewFactory
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<SXMediaSharingPolicyProvider> *mediaSharingPolicyProvider; // ivar: _mediaSharingPolicyProvider
@property (readonly, nonatomic) NSObject<SXPresentationAttributesProvider> *presentationAttributesProvider; // ivar: _presentationAttributesProvider
@property (readonly) Class superclass;


-(id)fullscreenCanvasControllerForShowable:(id)arg0 ;
-(id)initWithCaptionViewFactory:(id)arg0 presentationAttributesProvider:(id)arg1 mediaSharingPolicyProvider:(id)arg2 ;


@end


#endif