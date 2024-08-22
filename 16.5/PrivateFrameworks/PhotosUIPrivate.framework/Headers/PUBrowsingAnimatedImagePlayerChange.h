// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUBROWSINGANIMATEDIMAGEPLAYERCHANGE_H
#define PUBROWSINGANIMATEDIMAGEPLAYERCHANGE_H



#import "PUViewModelChange.h"

@interface PUBrowsingAnimatedImagePlayerChange : PUViewModelChange

@property (nonatomic, setter=_setAnimatedImageDidChange:) BOOL animatedImageDidChange; // ivar: _animatedImageDidChange
@property (nonatomic, setter=_setAnimatedImageLoadingAllowedDidChange:) BOOL animatedImageLoadingAllowedDidChange; // ivar: _animatedImageLoadingAllowedDidChange


-(BOOL)hasChanges;


@end


#endif