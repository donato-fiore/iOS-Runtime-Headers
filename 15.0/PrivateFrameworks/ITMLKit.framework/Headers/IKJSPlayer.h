// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IKJSPLAYER_H
#define IKJSPLAYER_H

@class NSMutableDictionary, NSDictionary, NSArray, NSDate, NSNumber, NSString;
@protocol IKJSPlayer;


#import "IKJSEventListenerObject.h"
#import "IKJSPlaylist.h"
#import "IKAppPlayerBridge.h"
#import "IKJSMediaItem.h"
#import "IKDOMDocument.h"

@interface IKJSPlayer : IKJSEventListenerObject <IKJSPlayer>

 {
    IKJSPlaylist *_playlist;
    NSInteger _playerState;
    BOOL _holdingSelfReference;
    NSMutableDictionary *_timedMetadataListeners;
    NSMutableDictionary *_timeListeners;
    NSMutableDictionary *_boundaryListeners;
}


@property (readonly, nonatomic) IKAppPlayerBridge *bridge; // ivar: _bridge
@property (copy, nonatomic) NSDictionary *contextMenuData;
@property (readonly, nonatomic) IKJSMediaItem *currentMediaItem;
@property (readonly, nonatomic) NSArray *currentMediaItemAccessLogs;
@property (readonly, nonatomic) NSDate *currentMediaItemDate;
@property (readonly, nonatomic) NSNumber *currentMediaItemDuration;
@property (readonly, nonatomic) NSArray *currentMediaItemErrorLogs;
@property (nonatomic) BOOL interactiveOverlayDismissable;
@property (retain, nonatomic) IKDOMDocument *interactiveOverlayDocument;
@property (nonatomic) BOOL muted;
@property (readonly, nonatomic) IKJSMediaItem *nextMediaItem;
@property (retain, nonatomic) IKDOMDocument *overlayDocument;
@property (nonatomic) CGFloat playbackRate;
@property (readonly, nonatomic) NSString *playbackState;
@property (retain, nonatomic) IKJSPlaylist *playlist;
@property (readonly, nonatomic) IKJSMediaItem *previousMediaItem;
@property (nonatomic) BOOL showsResumeMenu;
@property (retain, nonatomic) NSDictionary *userInfo;


-(BOOL)_timedMetadataDidChangeWithExtraInfo:(id)arg0 ;
-(BOOL)dispatchEvent:(id)arg0 userInfo:(id)arg1 ;
-(NSInteger)state;
-(id)init;
-(id)initWithAppContext:(id)arg0 bridge:(id)arg1 ;
-(void)_addManagedReference;
-(void)_removeManagedReference;
-(void)addEventListener:(id)arg0 ;
-(void)changeToMediaAtIndex:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)next;
-(void)pause;
-(void)play;
-(void)present;
-(void)previous;
-(void)removeEventListener:(id)arg0 ;
-(void)seekToTime:(CGFloat)arg0 ;
-(void)stop;


@end


#endif