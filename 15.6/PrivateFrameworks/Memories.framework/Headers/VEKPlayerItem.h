// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VEKPLAYERITEM_H
#define VEKPLAYERITEM_H

@class AVPlayerItem;


#import "AltClipCollection.h"
#import "OrientationInfo.h"

@interface VEKPlayerItem : AVPlayerItem

@property (retain, nonatomic) AltClipCollection *altInfo; // ivar: _altInfo
@property (readonly, nonatomic) CGFloat aspect;
@property (weak, nonatomic) OrientationInfo *currentAltInfo; // ivar: _currentAltInfo
@property (readonly, nonatomic) BOOL isRotated;
@property (nonatomic) CGSize targetSize; // ivar: _targetSize




@end


#endif