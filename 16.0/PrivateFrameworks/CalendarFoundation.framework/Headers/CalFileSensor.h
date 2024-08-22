// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CALFILESENSOR_H
#define CALFILESENSOR_H

@class NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface CalFileSensor : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_source;
}


@property (readonly, copy, nonatomic) id *eventBlock; // ivar: _eventBlock
@property (readonly, retain, nonatomic) NSString *path; // ivar: _path
@property (readonly, nonatomic) BOOL started; // ivar: _started


-(id)description;
-(id)init;
-(id)initWithPath:(id)arg0 eventBlock:(id)arg1 ;
-(void)dealloc;
-(void)start;
-(void)stop;


@end


#endif