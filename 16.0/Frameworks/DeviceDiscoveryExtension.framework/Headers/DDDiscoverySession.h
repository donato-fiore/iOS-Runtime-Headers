// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DDDISCOVERYSESSION_H
#define DDDISCOVERYSESSION_H


#import <Foundation/Foundation.h>


@interface DDDiscoverySession : NSObject

@property (copy, nonatomic) id *eventHandler; // ivar: _eventHandler


-(void)invalidate;
-(void)reportEvent:(id)arg0 ;


@end


#endif