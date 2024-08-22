// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFSETWALLPAPERACTION_H
#define WFSETWALLPAPERACTION_H

@class WFAction, NSUUID;



@interface WFSetWallpaperAction : WFAction

@property (retain, nonatomic) NSUUID *createdPosterConfigurationUUID; // ivar: _createdPosterConfigurationUUID


+(id)invalidPosterError;
+(id)unableToGetImageError;
+(id)userInterfaceProtocol;
-(BOOL)inputPassthrough;
-(BOOL)perspectiveZoom;
-(BOOL)showPreview;
-(BOOL)supportsPosters;
-(CGFloat)currentParallaxFactor;
-(CGFloat)maximumSizeInPixels;
-(NSInteger)sbf_wallpaperLocationFromLocationParameter;
-(NSInteger)wf_wallpaperLocationFromLocationParameter;
-(id)contentDestinationWithError:(*id)arg0 ;
-(id)imageTooLargeError;
-(id)invalidLocationError;
-(id)invalidLocationErrorWithProvidedLocation:(id)arg0 ;
-(id)locationParameterValues;
-(id)missingImageError;
-(id)noPosterHomeError;
-(id)readableLocationParameterValues;
-(id)setWallpaperFailedError;
-(id)smartPromptWithContentDescription:(id)arg0 contentDestination:(id)arg1 workflowName:(id)arg2 ;
-(void)buildWallpaperConfigurationFromCollection:(id)arg0 completionHandler:(id)arg1 ;
-(void)cancel;
-(void)deletePosterWithUUID:(id)arg0 completionHandler:(id)arg1 ;
-(void)finishAndSetCurrentPosterIfNecessary:(id)arg0 isNewPoster:(BOOL)arg1 ;
-(void)preparePosterWithCompletionHandler:(id)arg0 ;
-(void)runAsynchronouslyWithInput:(id)arg0 ;
-(void)runLegacySetWallpaperWithInput:(id)arg0 ;
-(void)setLegacyWallpaperWithImage:(id)arg0 ;


@end


#endif