// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IECONDITION_H
#define IECONDITION_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface IECondition : NSObject

@property (retain, nonatomic) NSArray *children; // ivar: _children
@property (retain, nonatomic) NSString *conditionId; // ivar: _conditionId
@property (retain, nonatomic) NSString *expression; // ivar: _expression
@property (nonatomic) BOOL value; // ivar: _value




@end


#endif