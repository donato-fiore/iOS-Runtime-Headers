// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPCSHAREDLISTENINGQUEUEEVENTPLAYBACKMODECHANGED_H
#define MPCSHAREDLISTENINGQUEUEEVENTPLAYBACKMODECHANGED_H


#import <Foundation/Foundation.h>


@interface MPCSharedListeningQueueEventPlaybackModeChanged : NSObject

@property (readonly, nonatomic) id *autoPlayEnabled; // ivar: _autoPlayEnabled
@property (readonly, nonatomic) NSInteger kind; // ivar: _kind
@property (readonly, nonatomic) id *repeatType; // ivar: _repeatType
@property (readonly, nonatomic) id *shuffleType; // ivar: _shuffleType


-(id)description;
-(id)initWithUpdatedAutoPlayEnabled:(BOOL)arg0 ;
-(id)initWithUpdatedRepeatType:(NSInteger)arg0 ;
-(id)initWithUpdatedShuffleType:(NSInteger)arg0 ;


@end


#endif