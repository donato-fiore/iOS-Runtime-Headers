// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VIDEOSEXTRASCONTEXT_H
#define VIDEOSEXTRASCONTEXT_H

@class NSString, MPPlaybackContext, UIViewController, NSURL, NSArray, MPMediaItem;
@protocol VideosExtrasRootViewControllerDelegate, VideosExtrasPlaybackDelegate, VideosExtrasContextDelegate, TVPMediaItem;

#import <Foundation/Foundation.h>

#import "VideosExtrasRootViewController.h"

@interface VideosExtrasContext : NSObject <VideosExtrasRootViewControllerDelegate, VideosExtrasPlaybackDelegate>



@property (readonly, copy, nonatomic) NSString *buyParameters; // ivar: _buyParameters
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<VideosExtrasContextDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) VideosExtrasRootViewController *extrasRootViewController; // ivar: _extrasRootViewController
@property (retain, nonatomic) MPPlaybackContext *featurePlaybackContext; // ivar: _featurePlaybackContext
@property (retain, nonatomic) UIViewController *featurePlaybackViewController; // ivar: _featurePlaybackViewController
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isStarted; // ivar: _isStarted
@property (readonly, copy, nonatomic) NSURL *javascriptURL; // ivar: _javascriptURL
@property (readonly, nonatomic) NSArray *mainMenuItemElements;
@property (readonly, nonatomic) MPMediaItem *mediaItem; // ivar: _mediaItem
@property (nonatomic) NSUInteger selectedMainMenuIndex; // ivar: _selectedMainMenuIndex
@property (nonatomic) BOOL showsBuiltInNavigationControls;
@property (nonatomic) BOOL showsMenuBar;
@property (readonly, nonatomic) NSInteger storeID; // ivar: _storeID
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<TVPMediaItem> *tvpMediaItem; // ivar: _tvpMediaItem


+(id)overriddenJavascriptURL;
+(void)overrideJavascriptURL:(id)arg0 ;
-(BOOL)isMenuItemElementMainFeature:(id)arg0 ;
-(BOOL)shouldExtrasBeVisibleForSize:(struct CGSize )arg0 ;
-(id)init;
-(id)initWithApplicationJavascriptURL:(id)arg0 storeID:(NSInteger)arg1 buyParameters:(id)arg2 ;
-(id)initWithMediaItem:(id)arg0 ;
-(id)initWithTVPMediaItem:(id)arg0 ;
-(void)_configureForMediaItem:(id)arg0 ;
-(void)clearNavStack;
-(void)extrasBackButtonPressed;
-(void)extrasDoneButtonPressed;
-(void)extrasMenuItemSelected:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)extrasRequestReloadWithContext:(id)arg0 ;
-(void)extrasRequestsMediaPlayback:(id)arg0 isBackground:(BOOL)arg1 ;
-(void)extrasRequestsPlaybackStop;
-(void)extrasRootViewController:(id)arg0 extrasVisibilityNeedsUpdate:(BOOL)arg1 ;
-(void)extrasRootViewControllerDidLoadMainMenuItems:(id)arg0 ;
-(void)failWithError:(id)arg0 ;
-(void)setClearsStackOnNextPush;
-(void)startIfNecessary;


@end


#endif