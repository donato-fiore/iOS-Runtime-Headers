// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLIOHIDOPERATORCOMPOSITION_H
#define PLIOHIDOPERATORCOMPOSITION_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>

#import "PLOperator.h"

@interface PLIOHIDOperatorComposition : NSObject

@property *__IOHIDEventSystemClient eventSystemClient; // ivar: _eventSystemClient
@property (retain) PLOperator *operator; // ivar: _operator
@property (copy, nonatomic) id *operatorBlock; // ivar: _operatorBlock
@property (retain) NSArray *serviceClients; // ivar: _serviceClients
@property (retain) NSString *serviceName; // ivar: _serviceName


-(CGFloat)doubleForKey:(id)arg0 ;
-(id)dictionaryForKey:(id)arg0 ;
-(id)initWithOperator:(id)arg0 forService:(id)arg1 ;
-(id)initWithOperator:(id)arg0 forService:(id)arg1 withBlock:(id)arg2 ;
-(void)dealloc;


@end


#endif