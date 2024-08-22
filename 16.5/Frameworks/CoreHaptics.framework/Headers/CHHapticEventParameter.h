// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CHHAPTICEVENTPARAMETER_H
#define CHHAPTICEVENTPARAMETER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface CHHapticEventParameter : NSObject

@property (readonly) NSString *parameterID; // ivar: _param
@property float value; // ivar: _value


-(id)init;
-(id)initWithParameterID:(id)arg0 value:(float)arg1 ;


@end


#endif