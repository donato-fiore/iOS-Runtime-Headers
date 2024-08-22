// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFCOERCION_H
#define WFCOERCION_H

@class WFType;

#import <Foundation/Foundation.h>

#import "WFCoercionHandler.h"

@interface WFCoercion : NSObject

@property (readonly, nonatomic) WFCoercionHandler *handler; // ivar: _handler
@property (readonly, nonatomic) WFType *type; // ivar: _type


+(id)coercionToClass:(Class)arg0 handler:(id)arg1 ;
+(id)coercionToType:(id)arg0 handler:(id)arg1 ;
-(BOOL)canProduceType:(id)arg0 ;
-(BOOL)canProduceType:(id)arg0 withConcurrencyMode:(NSInteger)arg1 ;
-(id)description;
-(id)initWithType:(id)arg0 handler:(id)arg1 ;


@end


#endif