// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TRANSITIONINPUT_H
#define TRANSITIONINPUT_H


#import <Foundation/Foundation.h>

#import "KonaClip.h"

@interface TransitionInput : NSObject

@property (nonatomic) int ID; // ivar: _ID
@property (nonatomic) KonaClip *clip; // ivar: _clip
@property (nonatomic) CGSize naturalSize; // ivar: _naturalSize
@property (nonatomic) CGAffineTransform transform; // ivar: _transform


-(id)description;


@end


#endif