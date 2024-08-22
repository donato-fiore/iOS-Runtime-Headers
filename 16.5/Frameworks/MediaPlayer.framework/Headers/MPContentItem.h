// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPCONTENTITEM_H
#define MPCONTENTITEM_H

@class NSString;

#import <Foundation/Foundation.h>

#import "MPMediaItemArtwork.h"

@interface MPContentItem : NSObject

@property (readonly, nonatomic) *void _mediaRemoteContentItem; // ivar: _mediaRemoteContentItem
@property (retain, nonatomic) MPMediaItemArtwork *artwork; // ivar: _artwork
@property (nonatomic, getter=isContainer) BOOL container;
@property (nonatomic, getter=isExplicitContent) BOOL explicitContent;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (nonatomic, getter=isPlayable) BOOL playable;
@property (nonatomic) float playbackProgress;
@property (nonatomic, getter=isStreamingContent) BOOL streamingContent;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *title;


+(BOOL)isSuppressingChangeNotifications;
+(BOOL)shouldPushArtworkData;
+(void)performChangeImmediately:(id)arg0 ;
+(void)performSuppressingChangeNotifications:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_initWithMediaRemoteContentItem:(*void)arg0 ;
-(id)createExternalRepresentation;
-(id)description;
-(id)init;
-(id)initWithExternalRepresentation:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 ;
-(void)_loadArtwork:(id)arg0 completion:(id)arg1 ;
-(void)_postItemChangedNotificationWithDeltaBlock:(id)arg0 ;
-(void)dealloc;


@end


#endif