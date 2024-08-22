// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXTIMER_H
#define ATXTIMER_H

@protocol OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface ATXTimer : NSObject {
    NSObject<OS_dispatch_source> *_source;
}




+(id)fireAtDate:(id)arg0 block:(id)arg1 ;
-(id)initWithDate:(id)arg0 block:(id)arg1 ;
-(void)dealloc;


@end


#endif