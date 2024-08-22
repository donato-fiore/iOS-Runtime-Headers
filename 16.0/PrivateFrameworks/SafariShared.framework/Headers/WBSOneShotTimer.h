// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSONESHOTTIMER_H
#define WBSONESHOTTIMER_H

@class NSDate;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface WBSOneShotTimer : NSObject {
    id *_block;
}


@property (readonly, nonatomic) NSDate *fireDate; // ivar: _fireDate
@property (readonly, nonatomic) BOOL isValid;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


-(id)initWithFireDate:(id)arg0 queue:(id)arg1 block:(id)arg2 ;
-(id)initWithFireDate:(id)arg0 queue:(id)arg1 target:(id)arg2 selector:(SEL)arg3 ;
-(void)invalidate;


@end


#endif