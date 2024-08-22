// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CAFLIPBOOK_H
#define CAFLIPBOOK_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface CAFlipBook : NSObject {
    unsigned int _serverPort;
    NSUInteger _maximumSize;
    unsigned int _displayId;
    NSUInteger _lastFrameId;
    unsigned int _generation;
    NSMutableArray *_frames;
}


@property (nonatomic) unsigned int contextId; // ivar: _contextId
@property (nonatomic, getter=isInverted) BOOL inverted; // ivar: _inverted
@property (nonatomic) BOOL wantsTransform; // ivar: _wantsTransform


-(id)_frameById:(NSUInteger)arg0 ;
-(id)_initWithDisplayId:(unsigned int)arg0 options:(id)arg1 ;
-(id)activeFrames;
-(id)cancel;
-(id)description;
-(id)frameAtTime:(NSUInteger)arg0 ;
-(id)renderForTime:(NSUInteger)arg0 options:(id)arg1 userInfo:(id)arg2 error:(*id)arg3 ;
-(void)_collectFlipBookFrames;
-(void)collect;
-(void)dealloc;
-(void)purge;


@end


#endif