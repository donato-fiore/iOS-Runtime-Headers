// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUMEDIAITEM_H
#define HUMEDIAITEM_H

@class HFItem, MPPlaybackArchiveDisplayProperties;



@interface HUMediaItem : HFItem

@property (retain, nonatomic) MPPlaybackArchiveDisplayProperties *playbackArchiveDisplayProperties; // ivar: _playbackArchiveDisplayProperties


-(id)_subclass_updateWithOptions:(id)arg0 ;
-(id)initWithPlaybackArchiveDisplayProperties:(id)arg0 ;


@end


#endif