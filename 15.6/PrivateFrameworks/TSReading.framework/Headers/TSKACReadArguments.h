// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSKACREADARGUMENTS_H
#define TSKACREADARGUMENTS_H


#import <Foundation/Foundation.h>


@interface TSKACReadArguments : NSObject

@property (readonly, nonatomic) *void argument; // ivar: _argument
@property (readonly, nonatomic) id *argument2; // ivar: _argument2
@property (readonly, nonatomic) SEL selector; // ivar: _selector
@property (readonly, nonatomic) id *target; // ivar: _target


-(id)initWithSelector:(SEL)arg0 target:(id)arg1 argument:(*void)arg2 ;
-(id)initWithSelector:(SEL)arg0 target:(id)arg1 argument:(*void)arg2 argument2:(id)arg3 ;
-(void)dealloc;


@end


#endif