// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VSWAITGROUP_H
#define VSWAITGROUP_H

@protocol OS_dispatch_group;

#import <Foundation/Foundation.h>


@interface VSWaitGroup : NSObject {
    NSObject<OS_dispatch_group> *_group;
}




-(BOOL)wait;
-(BOOL)waitWithMilliseconds:(NSUInteger)arg0 ;
-(id)init;
-(void)enter;
-(void)leave;


@end


#endif