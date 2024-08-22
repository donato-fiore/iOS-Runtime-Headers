// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFPARAMETERVALUEWRAPPER_H
#define WFPARAMETERVALUEWRAPPER_H

@class WFParameter<WFParameterValuePickable>, NSString;
@protocol WFParameterState;

#import <Foundation/Foundation.h>


@interface WFParameterValueWrapper : NSObject

@property (readonly, nonatomic) WFParameter<WFParameterValuePickable> *parameter; // ivar: _parameter
@property (readonly, copy, nonatomic) NSString *readableTitle;
@property (readonly, nonatomic) NSObject<WFParameterState> *value; // ivar: _value


-(id)initWithValue:(id)arg0 parameter:(id)arg1 ;


@end


#endif