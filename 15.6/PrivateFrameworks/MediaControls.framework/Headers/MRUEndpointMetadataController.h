// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MRUENDPOINTMETADATACONTROLLER_H
#define MRUENDPOINTMETADATACONTROLLER_H

@class UIImage, MPArtworkCatalog, NSString, NSDictionary, MRNowPlayingPlayerResponse, NSHashTable, MPCPlayerCommandRequest, MPCPlayerResponse;
@protocol MediaControlsEndpointControllerDelegate, MRUMediaSuggestionsControllerObserver;

#import <Foundation/Foundation.h>

#import "MediaControlsEndpointController.h"
#import "MRUMediaSuggestion.h"
#import "MRUMediaSuggestionsController.h"
#import "MRUTVRemoteController.h"

@interface MRUEndpointMetadataController : NSObject <MediaControlsEndpointControllerDelegate, MRUMediaSuggestionsControllerObserver>

 {
    NSUInteger _stateHandle;
}


@property (readonly, nonatomic) UIImage *applicationIcon; // ivar: _applicationIcon
@property (readonly, nonatomic) MPArtworkCatalog *artworkCatalog;
@property (readonly, copy, nonatomic) NSString *condensedTitle;
@property (nonatomic) NSInteger context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) MediaControlsEndpointController *endpointController; // ivar: _endpointController
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL hideSuggestionsWhileDeviceIsLocked; // ivar: _hideSuggestionsWhileDeviceIsLocked
@property (retain, nonatomic) NSString *iconURL; // ivar: _iconURL
@property (readonly, nonatomic) BOOL isPlaying;
@property (readonly, nonatomic) BOOL isSystemMusicApplication;
@property (retain, nonatomic) NSDictionary *keyResponseProperties; // ivar: _keyResponseProperties
@property (readonly, nonatomic) MRUMediaSuggestion *nowPlayingMediaSuggestion;
@property (retain, nonatomic) MRNowPlayingPlayerResponse *nowPlayingPlayerResponse; // ivar: _nowPlayingPlayerResponse
@property (retain, nonatomic) MPArtworkCatalog *nowPlayingPlayerResponseArtworkCatalog; // ivar: _nowPlayingPlayerResponseArtworkCatalog
@property (retain, nonatomic) NSHashTable *observers; // ivar: _observers
@property (readonly, nonatomic) UIImage *placeholderImage;
@property (readonly, copy, nonatomic) NSString *placeholderText;
@property (readonly, nonatomic) NSInteger quickAction;
@property (readonly, nonatomic) NSString *quickActionCommandDescription; // ivar: _quickActionCommandDescription
@property (retain, nonatomic) UIImage *quickActionCommandImage; // ivar: _quickActionCommandImage
@property (retain, nonatomic) MPCPlayerCommandRequest *quickActionCommandRequest; // ivar: _quickActionCommandRequest
@property (readonly, nonatomic) UIImage *quickActionImage;
@property (readonly, nonatomic) MPCPlayerResponse *response;
@property (readonly, copy, nonatomic) NSString *routeUID;
@property (readonly, nonatomic) BOOL shouldShowQuickAction;
@property (readonly, nonatomic) BOOL showMediaSuggestions; // ivar: _showMediaSuggestions
@property (readonly, nonatomic) BOOL showPlaceholderText;
@property (readonly, copy, nonatomic) NSString *smallSubtitle;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (retain, nonatomic) NSString *suggestionContext; // ivar: _suggestionContext
@property (retain, nonatomic) MRUMediaSuggestionsController *suggestionsController; // ivar: _suggestionsController
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, nonatomic) MRUTVRemoteController *tvRemoteController; // ivar: _tvRemoteController
@property (copy, nonatomic) NSString *undiscoveredPlaceholderText; // ivar: _undiscoveredPlaceholderText


-(BOOL)containsOutputDeviceWithRouteUID:(id)arg0 ;
-(BOOL)hasNowPlayingInfo;
-(BOOL)isEndpointDiscovered;
-(id)_fullStateDumpObject;
-(id)destination;
-(id)initWithEndpointController:(id)arg0 ;
-(id)keyPropertiesForResponse:(id)arg0 ;
-(id)subtitleComponentsWithCondensed:(BOOL)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)dealloc;
-(void)endpointController:(id)arg0 didLoadNewResponse:(id)arg1 ;
-(void)endpointControllerDidChangeState:(id)arg0 ;
-(void)endpointControllerDidUpdateRoutingAvailability:(id)arg0 ;
-(void)endpointControllerRouteDidUpdate:(id)arg0 ;
-(void)mediaSuggestionsController:(id)arg0 didUpdateSuggestions:(id)arg1 ;
-(void)performQuickAction;
-(void)removeObserver:(id)arg0 ;
-(void)resumePlabackWithCompletion:(id)arg0 ;
-(void)trackQuickActionSelected;
-(void)updateApplicationIcon;
-(void)updateAutomaticResponseLoading;
-(void)updateKeyResponsePropertiesForResponse:(id)arg0 ;
-(void)updateQuickActionCommandRequest;
-(void)updateShowMediaSuggestions;


@end


#endif