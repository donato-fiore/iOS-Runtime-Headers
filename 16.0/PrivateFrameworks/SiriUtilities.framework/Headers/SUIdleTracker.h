// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SUIDLETRACKER_H
#define SUIDLETRACKER_H


#import <Foundation/Foundation.h>


@interface SUIdleTracker : NSObject {
    ? name;
    ? queue;
    ? timeout;
    ? timeoutAction;
    ? timer;
    ? refs;
    ? lock;
}


@property (nonatomic, readonly) NSInteger count;
@property (nonatomic, readonly) BOOL idle;


-(id)init;
-(id)initWithName:(id)arg0 ;
-(id)initWithName:(id)arg0 queue:(id)arg1 timeoutSeconds:(NSInteger)arg2 timeoutAction:(id)arg3 ;
-(id)track;
-(id)trackWithName:(id)arg0 ;


@end


#endif