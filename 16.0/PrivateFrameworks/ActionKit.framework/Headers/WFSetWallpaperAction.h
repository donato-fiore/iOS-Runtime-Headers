// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFSETWALLPAPERACTION_H
#define WFSETWALLPAPERACTION_H

@class WFAction;



@interface WFSetWallpaperAction : WFAction



+(id)unableToGetImageError;
+(id)userInterfaceProtocol;
-(BOOL)perspectiveZoom;
-(BOOL)showPreview;
-(CGFloat)currentParallaxFactor;
-(CGFloat)maximumSizeInPixels;
-(NSInteger)wallpaperLocationFromLocationParameter;
-(id)contentDestinationWithError:(*id)arg0 ;
-(id)imageTooLargeError;
-(id)invalidLocationErrorWithProvidedLocation:(id)arg0 ;
-(id)locationParameterValues;
-(id)missingImageError;
-(id)readableLocationParameterValues;
-(id)setWallpaperFailedError;
-(id)smartPromptWithContentDescription:(id)arg0 contentDestination:(id)arg1 workflowName:(id)arg2 ;
-(void)configureLegacyPosterIfNecessaryWithCompletionHandler:(id)arg0 ;
-(void)runAsynchronouslyWithInput:(id)arg0 ;
-(void)setConfigurationAsSelected:(id)arg0 service:(id)arg1 completionHandler:(id)arg2 ;
-(void)setWallpaperWithImage:(id)arg0 ;


@end


#endif