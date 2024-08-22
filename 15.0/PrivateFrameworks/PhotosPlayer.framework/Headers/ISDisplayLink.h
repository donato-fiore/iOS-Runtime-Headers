// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ISDISPLAYLINK_H
#define ISDISPLAYLINK_H

@class CADisplayLink;

#import <Foundation/Foundation.h>


@interface ISDisplayLink : NSObject

@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (retain, nonatomic) CADisplayLink *displayLink; // ivar: _displayLink
@property (nonatomic) NSInteger preferredFramesPerSecond; // ivar: _preferredFramesPerSecond
@property (copy, nonatomic) id *updateHandler; // ivar: _updateHandler


// -(id)initWithUpdateHandler:(id)arg0 completionHandler:(unk)arg1  ;
-(void)_callUpdateHandler;
-(void)_update:(id)arg0 ;
-(void)dealloc;
-(void)start;
-(void)stop;


@end


#endif