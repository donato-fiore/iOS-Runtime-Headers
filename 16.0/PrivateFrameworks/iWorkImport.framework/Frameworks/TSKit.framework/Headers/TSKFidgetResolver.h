// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSKFIDGETRESOLVER_H
#define TSKFIDGETRESOLVER_H


#import <Foundation/Foundation.h>


@interface TSKFidgetResolver : NSObject {
    id _values;
    CGFloat _times;
    NSUInteger _head;
}


@property (nonatomic) CGFloat fidgetThreshold; // ivar: _fidgetThreshold
@property (readonly, nonatomic) id *nonFidgetValue;


-(NSUInteger)p_previousValidIndexFromIndex:(NSUInteger)arg0 ;
-(id)init;
-(void)p_advanceHead;
-(void)pushValue:(id)arg0 ;
-(void)pushValue:(id)arg0 withTime:(CGFloat)arg1 ;


@end


#endif