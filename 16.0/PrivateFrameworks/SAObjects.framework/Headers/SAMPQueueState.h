// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAMPQUEUESTATE_H
#define SAMPQUEUESTATE_H

@class NSString, NSDictionary, NSNumber;
@protocol SABackgroundContextObject;


#import "AceObject.h"
#import "SANPVideoAudioAndSubtitleLanguageOptions.h"
#import "SAMPMediaItem.h"
#import "SANPCommandInfo.h"
#import "SAMPNowPlayingQueuePosition.h"

@interface SAMPQueueState : AceObject <SABackgroundContextObject>



@property (copy, nonatomic) NSString *applicationIdentifier;
@property (retain, nonatomic) SANPVideoAudioAndSubtitleLanguageOptions *audioAndSubtitleLanguageOptions;
@property (nonatomic) BOOL currentItemSteerable;
@property (copy, nonatomic) NSDictionary *currentListeningToContainer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SAMPMediaItem *listeningToItem;
@property (retain, nonatomic) SAMPMediaItem *nextListeningToItem;
@property (retain, nonatomic) SANPCommandInfo *nowPlayingCommandInfo;
@property (retain, nonatomic) SAMPNowPlayingQueuePosition *playbackQueuePosition;
@property (copy, nonatomic) NSNumber *playbackRate;
@property (retain, nonatomic) SAMPMediaItem *previousListenedToItem;
@property (copy, nonatomic) NSNumber *shuffleEnabled;
@property (copy, nonatomic) NSString *source;
@property (nonatomic) int state;
@property (readonly) Class superclass;


+(id)queueState;
+(id)queueStateWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif