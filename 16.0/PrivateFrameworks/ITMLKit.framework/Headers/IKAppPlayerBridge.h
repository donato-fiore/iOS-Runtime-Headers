// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IKAPPPLAYERBRIDGE_H
#define IKAPPPLAYERBRIDGE_H

@class NSDictionary, NSArray, NSDate, NSNumber, NSString;
@protocol IKDOMFeature, IKAppPlayer;

#import <Foundation/Foundation.h>

#import "_IKPlaceholderAppPlayer.h"
#import "IKAppContext.h"
#import "IKAppMediaItemBridge.h"
#import "IKDOMDocument.h"
#import "IKJSPlayer.h"
#import "IKAppPlaylistBridge.h"

@interface IKAppPlayerBridge : NSObject <IKDOMFeature>

 {
    _IKPlaceholderAppPlayer *_placeholderAppPlayer;
}


@property (readonly, weak, nonatomic) IKAppContext *appContext; // ivar: _appContext
@property (weak, nonatomic) NSObject<IKAppPlayer> *appPlayer; // ivar: _appPlayer
@property (copy, nonatomic) NSDictionary *contextMenuData; // ivar: _contextMenuData
@property (readonly, nonatomic) IKAppMediaItemBridge *currentMediaItem;
@property (readonly, nonatomic) NSArray *currentMediaItemAccessLogs;
@property (readonly, nonatomic) NSDate *currentMediaItemDate;
@property (readonly, nonatomic) NSNumber *currentMediaItemDuration;
@property (readonly, nonatomic) NSArray *currentMediaItemErrorLogs;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *featureName; // ivar: _featureName
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL interactiveOverlayDismissable; // ivar: _interactiveOverlayDismissable
@property (retain, nonatomic) IKDOMDocument *interactiveOverlayDocument; // ivar: _interactiveOverlayDocument
@property (weak, nonatomic) IKJSPlayer *jsPlayer; // ivar: _jsPlayer
@property (nonatomic) BOOL muted; // ivar: _muted
@property (readonly, nonatomic) IKAppMediaItemBridge *nextMediaItem;
@property (retain, nonatomic) IKDOMDocument *overlayDocument; // ivar: _overlayDocument
@property (retain, nonatomic) IKAppPlaylistBridge *playlist; // ivar: _playlist
@property (readonly, nonatomic) IKAppMediaItemBridge *previousMediaItem;
@property (readonly, nonatomic) CGFloat scanRate;
@property (nonatomic) BOOL showsResumeMenu; // ivar: _showsResumeMenu
@property (readonly, nonatomic) NSInteger state;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSDictionary *userInfo; // ivar: _userInfo


+(id)makeFeatureJSObjectForFeature:(id)arg0 ;
-(id)initWithAppContext:(id)arg0 jsPlayer:(id)arg1 ;
-(id)initWithDOMNode:(id)arg0 featureName:(id)arg1 ;
-(void)_evaluateDelegateBlockSync:(id)arg0 ;
-(void)changeToMediaAtIndex:(NSUInteger)arg0 ;
-(void)cleanup;
-(void)dispatchEvent:(id)arg0 userInfo:(id)arg1 completion:(id)arg2 ;
-(void)next;
-(void)pause;
-(void)play;
-(void)present;
-(void)previous;
-(void)scan:(CGFloat)arg0 ;
-(void)setElapsedTime:(CGFloat)arg0 ;
-(void)startObservingEvent:(id)arg0 extraInfo:(id)arg1 ;
-(void)stop;
-(void)stopObservingEvent:(id)arg0 ;


@end


#endif