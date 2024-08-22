// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRPOLLINGTIMER_H
#define CRPOLLINGTIMER_H


#import <Foundation/Foundation.h>


@interface CRPollingTimer : NSObject {
    ? _fireTime;
}


@property (nonatomic) ? fireTime;
@property (nonatomic) BOOL fired; // ivar: _fired
@property (nonatomic) SEL selector; // ivar: _selector
@property (weak, nonatomic) id *target; // ivar: _target
@property (nonatomic) BOOL valid; // ivar: _valid


-(id)initWithTarget:(id)arg0 selector:(SEL)arg1 ;
-(void)evalAtTime:(struct ? )arg0 ;


@end


#endif