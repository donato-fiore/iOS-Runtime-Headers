// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFSIRIWORDTIMINGPLAYER_H
#define SFSIRIWORDTIMINGPLAYER_H

@class NSString, NSArray;
@protocol OS_dispatch_source, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SFSiriWordTimingInfo.h"

@interface SFSiriWordTimingPlayer : NSObject {
    NSObject<OS_dispatch_source> *_timer;
    NSUInteger _wordIndex;
    SFSiriWordTimingInfo *_wordInfo;
}


@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (nonatomic) unsigned int flags; // ivar: _flags
@property (nonatomic) CGFloat startTime; // ivar: _startTime
@property (copy, nonatomic) NSString *text; // ivar: _text
@property (copy, nonatomic) id *wordHandler; // ivar: _wordHandler
@property (copy, nonatomic) NSArray *wordTimings; // ivar: _wordTimings


-(id)init;
-(void)_processNextWord;
-(void)_processWord;
-(void)activate;
-(void)invalidate;


@end


#endif