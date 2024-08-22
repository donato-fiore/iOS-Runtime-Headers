// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFVARIABLECOMPONENTPOINTERWRAPPER_H
#define WFVARIABLECOMPONENTPOINTERWRAPPER_H

@class WFVariable;

#import <Foundation/Foundation.h>


@interface WFVariableComponentPointerWrapper : NSObject

@property (readonly, nonatomic) WFVariable *variable; // ivar: _variable


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithVariable:(id)arg0 ;


@end


#endif