// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCUSEREVENTHISTORYPRUNINGPOLICY_H
#define FCUSEREVENTHISTORYPRUNINGPOLICY_H


#import <Foundation/Foundation.h>


@interface FCUserEventHistoryPruningPolicy : NSObject

@property (nonatomic) NSInteger type; // ivar: _type
@property (nonatomic) NSUInteger value; // ivar: _value


-(id)description;
-(id)initWithType:(NSInteger)arg0 value:(NSUInteger)arg1 ;


@end


#endif