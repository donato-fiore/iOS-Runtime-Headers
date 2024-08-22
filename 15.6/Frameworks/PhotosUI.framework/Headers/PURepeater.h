// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUREPEATER_H
#define PUREPEATER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PURepeater : NSObject {
    id *_block;
}


@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (nonatomic) CGFloat timeInterval; // ivar: _timeInterval


-(id)init;
-(id)initWithBlock:(id)arg0 ;
-(void)_fire;
-(void)start;
-(void)stop;


@end


#endif