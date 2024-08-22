// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUDISPLAYLINK_H
#define PUDISPLAYLINK_H

@class CADisplayLink;

#import <Foundation/Foundation.h>


@interface PUDisplayLink : NSObject

@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (retain, nonatomic) CADisplayLink *displayLink; // ivar: _displayLink
@property (copy, nonatomic) id *updateHandler; // ivar: _updateHandler


// -(id)initWithUpdateHandler:(id)arg0 completionHandler:(unk)arg1  ;
-(void)_update:(id)arg0 ;
-(void)start;
-(void)stop;


@end


#endif