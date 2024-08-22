// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TVPPLAYERITEM_H
#define TVPPLAYERITEM_H

@class AVPlayerItem, TVImageProxy, AVMediaSelectionOption;


#import "TVPMediaItemLoader.h"

@interface TVPPlayerItem : AVPlayerItem

@property (nonatomic) BOOL audioSelectionIsAutomatic; // ivar: _audioSelectionIsAutomatic
@property (weak, nonatomic) TVPMediaItemLoader *mediaItemLoader; // ivar: _mediaItemLoader
@property (nonatomic) BOOL muted; // ivar: _muted
@property (retain, nonatomic) TVImageProxy *posterProxy; // ivar: _posterProxy
@property (nonatomic) NSInteger previousStatus; // ivar: _previousStatus
@property (retain, nonatomic) AVMediaSelectionOption *savedManualAudioSelection; // ivar: _savedManualAudioSelection
@property (retain, nonatomic) id *scrubImageLoader; // ivar: _scrubImageLoader


-(id)initWithAsset:(id)arg0 ;
-(void)dealloc;
-(void)selectMediaOption:(id)arg0 inMediaSelectionGroup:(id)arg1 ;
-(void)selectMediaOptionAutomaticallyInMediaSelectionGroup:(id)arg0 ;


@end


#endif