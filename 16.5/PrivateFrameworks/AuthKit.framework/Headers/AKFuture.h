// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AKFUTURE_H
#define AKFUTURE_H

@class NSDate, NSMutableArray, NSCondition;

#import <Foundation/Foundation.h>


@interface AKFuture : NSObject

@property (retain, nonatomic) NSDate *beginDate; // ivar: _beginDate
@property (retain, nonatomic) NSMutableArray *internalWrapper; // ivar: _internalWrapper
@property (nonatomic) CGFloat maxWait; // ivar: _maxWait
@property (nonatomic) BOOL resolved; // ivar: _resolved
@property (retain, nonatomic) NSCondition *valueCondition; // ivar: _valueCondition


-(id)init;
-(id)initWithMaxWait:(CGFloat)arg0 description:(id)arg1 ;
-(id)value;
-(void)setValue:(id)arg0 ;


@end


#endif