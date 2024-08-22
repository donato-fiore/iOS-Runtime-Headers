// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSWPITERATIVEATTACHMENTPOSITIONINGSTATE_H
#define TSWPITERATIVEATTACHMENTPOSITIONINGSTATE_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface TSWPIterativeAttachmentPositioningState : NSObject

@property (readonly, nonatomic) CGPoint bestPosition; // ivar: _bestPosition
@property (readonly, nonatomic) CGFloat mismatch; // ivar: _mismatch
@property (readonly, nonatomic) NSUInteger passCount; // ivar: _passCount
@property (readonly, nonatomic) NSArray *passPositions; // ivar: _passPositions
@property (readonly, nonatomic) CGPoint position; // ivar: _position
@property (readonly, nonatomic) CGFloat smallestMismatch; // ivar: _smallestMismatch


-(BOOL)hasLoopInLastPasses;
-(id)init;
-(void)dealloc;


@end


#endif