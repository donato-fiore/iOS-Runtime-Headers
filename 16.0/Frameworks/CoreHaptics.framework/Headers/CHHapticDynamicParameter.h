// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CHHAPTICDYNAMICPARAMETER_H
#define CHHAPTICDYNAMICPARAMETER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface CHHapticDynamicParameter : NSObject

@property (readonly) NSString *parameterID; // ivar: _param
@property CGFloat relativeTime; // ivar: _time
@property float value; // ivar: _value


-(id)init;
-(id)initWithParameterID:(id)arg0 value:(float)arg1 relativeTime:(CGFloat)arg2 ;


@end


#endif