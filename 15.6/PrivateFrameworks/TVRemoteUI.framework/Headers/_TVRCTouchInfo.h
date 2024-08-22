// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TVRCTOUCHINFO_H
#define _TVRCTOUCHINFO_H


#import <Foundation/Foundation.h>


@interface _TVRCTouchInfo : NSObject

@property (nonatomic) CGRect boundingBox; // ivar: _boundingBox
@property (nonatomic) CGPoint initialLocation; // ivar: _initialLocation
@property (nonatomic) CGPoint initialProportionalLocation; // ivar: _initialProportionalLocation
@property (nonatomic) BOOL isLikelyLongListScrollingEdgeGesture; // ivar: _isLikelyLongListScrollingEdgeGesture
@property (nonatomic) BOOL pendingCancellation; // ivar: _pendingCancellation
@property (nonatomic) CGFloat previousTimestamp; // ivar: _previousTimestamp
@property (nonatomic) CGFloat timestamp; // ivar: _timestamp
@property (nonatomic) NSInteger virtualPhase; // ivar: _virtualPhase


-(id)description;


@end


#endif