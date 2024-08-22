// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFVARIABLECONFIGURATIONPROPERTY_H
#define WFVARIABLECONFIGURATIONPROPERTY_H

@class WFContentProperty, NSString;

#import <Foundation/Foundation.h>


@interface WFVariableConfigurationProperty : NSObject

@property (readonly, nonatomic) WFContentProperty *contentProperty; // ivar: _contentProperty
@property (readonly, nonatomic) NSString *label; // ivar: _label
@property (readonly, nonatomic) BOOL negativeProperty; // ivar: _negativeProperty


-(id)initWithContentProperty:(id)arg0 negativeProperty:(BOOL)arg1 ;
-(id)initWithLabel:(id)arg0 ;


@end


#endif