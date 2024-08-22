// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ISLIVEPHOTOSEEKBEHAVIOR_H
#define ISLIVEPHOTOSEEKBEHAVIOR_H



#import "ISBehavior.h"

@interface ISLivePhotoSeekBehavior : ISBehavior {
    BOOL _isSeeking;
    BOOL _needsSeek;
    BOOL _needsTransitionToVideo;
}


@property (copy, nonatomic) id *seekCompletionHandler; // ivar: _seekCompletionHandler
@property (nonatomic) ? seekTime; // ivar: _seekTime


-(NSInteger)behaviorType;
-(id)initWithInitialLayoutInfo:(id)arg0 seekTime:(struct ? )arg1 ;
-(void)_callSeekCompletionHandler:(BOOL)arg0 ;
-(void)_handleDidSeekToSeekTime:(BOOL)arg0 ;
-(void)_seekIfNeeded;
-(void)activeDidChange;


@end


#endif