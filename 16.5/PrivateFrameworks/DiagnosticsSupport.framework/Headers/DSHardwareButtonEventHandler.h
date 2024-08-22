// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DSHARDWAREBUTTONEVENTHANDLER_H
#define DSHARDWAREBUTTONEVENTHANDLER_H


#import <Foundation/Foundation.h>


@interface DSHardwareButtonEventHandler : NSObject

@property (nonatomic) SEL action; // ivar: _action
@property (nonatomic) NSUInteger events; // ivar: _events
@property (nonatomic) BOOL preventPropagation; // ivar: _preventPropagation
@property (retain, nonatomic) id *target; // ivar: _target


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToHandler:(id)arg0 ;


@end


#endif