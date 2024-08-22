// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _IKPLACEHOLDERAPPPLAYER_H
#define _IKPLACEHOLDERAPPPLAYER_H

@class NSMutableDictionary, NSDictionary, NSArray, NSDate, NSNumber, NSString;
@protocol IKAppPlayer, IKAppMediaItem, IKAppPlaylist;

#import <Foundation/Foundation.h>

#import "IKAppPlayerBridge.h"
#import "IKAppDocument.h"

@interface _IKPlaceholderAppPlayer : NSObject <IKAppPlayer>

 {
    NSMutableDictionary *_eventExtraInfoByEvent;
}


@property (readonly, nonatomic) IKAppPlayerBridge *bridge; // ivar: bridge
@property (copy, nonatomic) NSDictionary *contextMenuData; // ivar: contextMenuData
@property (readonly, nonatomic) NSObject<IKAppMediaItem> *currentMediaItem; // ivar: currentMediaItem
@property (readonly, nonatomic) NSArray *currentMediaItemAccessLogs; // ivar: currentMediaItemAccessLogs
@property (readonly, nonatomic) NSDate *currentMediaItemDate; // ivar: currentMediaItemDate
@property (readonly, nonatomic) NSNumber *currentMediaItemDuration; // ivar: currentMediaItemDuration
@property (readonly, nonatomic) NSArray *currentMediaItemErrorLogs; // ivar: currentMediaItemErrorLogs
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL interactiveOverlayDismissable; // ivar: interactiveOverlayDismissable
@property (retain, nonatomic) IKAppDocument *interactiveOverlayDocument; // ivar: interactiveOverlayDocument
@property (nonatomic) BOOL muted; // ivar: muted
@property (readonly, nonatomic) NSObject<IKAppMediaItem> *nextMediaItem; // ivar: nextMediaItem
@property (retain, nonatomic) IKAppDocument *overlayDocument; // ivar: overlayDocument
@property (retain, nonatomic) NSObject<IKAppPlaylist> *playlist; // ivar: playlist
@property (readonly, nonatomic) NSObject<IKAppMediaItem> *previousMediaItem; // ivar: previousMediaItem
@property (readonly, nonatomic) CGFloat scanRate; // ivar: scanRate
@property (nonatomic) BOOL showsResumeMenu; // ivar: showsResumeMenu
@property (readonly, nonatomic) NSInteger state; // ivar: state
@property (readonly) Class superclass;
@property (copy, nonatomic) NSDictionary *userInfo; // ivar: userInfo


-(void)changeToMediaAtIndex:(NSInteger)arg0 ;
-(void)cleanup;
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
-(void)transferValuesToAppPlayer:(id)arg0 ;


@end


#endif