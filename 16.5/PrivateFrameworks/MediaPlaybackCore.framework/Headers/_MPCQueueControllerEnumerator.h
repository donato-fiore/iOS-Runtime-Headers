// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MPCQUEUECONTROLLERENUMERATOR_H
#define _MPCQUEUECONTROLLERENUMERATOR_H

@class NSEnumerator, MPSectionedIdentifierListPosition;


#import "_MPCQueueControllerBehaviorMusic.h"

@interface _MPCQueueControllerEnumerator : NSEnumerator {
    NSInteger _nextEnumerator;
    BOOL _isEnumeratingFromRepeatAllBase;
    BOOL _hasEmittedItemFromRepeatAllBase;
}


@property (readonly, nonatomic) MPSectionedIdentifierListPosition *endPosition; // ivar: _endPosition
@property (readonly, nonatomic) NSEnumerator *enumerator; // ivar: _enumerator
@property (readonly, nonatomic) NSInteger mode; // ivar: _mode
@property (readonly, weak, nonatomic) _MPCQueueControllerBehaviorMusic *musicBehavior; // ivar: _musicBehavior
@property (readonly, nonatomic) NSUInteger options; // ivar: _options
@property (copy, nonatomic) id *repeatBoundaryBlock; // ivar: _repeatBoundaryBlock
@property (readonly, nonatomic) MPSectionedIdentifierListPosition *startPosition; // ivar: _startPosition


+(id)enumeratorWithMusicBehavior:(id)arg0 mode:(NSInteger)arg1 options:(NSUInteger)arg2 startPosition:(id)arg3 endPosition:(id)arg4 ;
-(id)_init;
-(id)nextObject;
-(void)_buildEnumerator;


@end


#endif