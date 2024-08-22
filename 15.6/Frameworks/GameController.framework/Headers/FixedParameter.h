// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FIXEDPARAMETER_H
#define FIXEDPARAMETER_H


#import <Foundation/Foundation.h>


@interface FixedParameter : NSObject

@property (readonly, nonatomic) int identifier; // ivar: _identifier
@property (readonly, nonatomic) float value; // ivar: _value


-(id)description;
-(id)initWithIdentifier:(int)arg0 value:(float)arg1 ;


@end


#endif