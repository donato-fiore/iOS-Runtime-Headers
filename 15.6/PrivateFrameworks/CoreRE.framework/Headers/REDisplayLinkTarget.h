// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef REDISPLAYLINKTARGET_H
#define REDISPLAYLINKTARGET_H


#import <Foundation/Foundation.h>


@interface REDisplayLinkTarget : NSObject {
    *void _clock;
}




-(id)initWithClock:(*void)arg0 ;
-(void)update;
-(void)updateOnQueue;


@end


#endif