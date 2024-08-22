// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFVARIABLEEDITINGANCHOR_H
#define WFVARIABLEEDITINGANCHOR_H

@class WFParameter, WFVariable;
@protocol WFVariableProvider;

#import <Foundation/Foundation.h>


@interface WFVariableEditingAnchor : NSObject

@property (readonly, nonatomic) WFParameter *parameter; // ivar: _parameter
@property (readonly, nonatomic) WFVariable *variable; // ivar: _variable
@property (readonly, nonatomic) NSObject<WFVariableProvider> *variableProvider; // ivar: _variableProvider


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithVariable:(id)arg0 variableProvider:(id)arg1 parameter:(id)arg2 ;


@end


#endif