// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef JFXCOMPOSITIONPLAYERREQUEST_H
#define JFXCOMPOSITIONPLAYERREQUEST_H

@class NSString;

#import <Foundation/Foundation.h>

#import "JFXCompositionPlayer.h"

@interface JFXCompositionPlayerRequest : NSObject

@property (copy, nonatomic) id *block; // ivar: _block
@property (copy, nonatomic) id *completionBlock; // ivar: _completionBlock
@property (weak) JFXCompositionPlayer *player; // ivar: _player
@property (nonatomic) CGFloat queuedTime; // ivar: _queuedTime
@property (readonly, nonatomic) NSUInteger signPostID; // ivar: _signPostID
@property (nonatomic) CGFloat startTime; // ivar: _startTime
@property (nonatomic) NSUInteger type; // ivar: _type
@property (readonly, nonatomic) NSString *uniqueID; // ivar: _uniqueID


+(id)stringFromRequestType:(NSUInteger)arg0 ;
-(id)description;
// -(id)initWithBlock:(id)arg0 ofType:(unk)arg1  ;
-(void)didBegin;
-(void)didCancel;
-(void)didComplete;
-(void)didEnqueue;


@end


#endif