// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCH3DEXTERNALLABELATTRIBUTE_H
#define TSCH3DEXTERNALLABELATTRIBUTE_H


#import <Foundation/Foundation.h>

#import "TSCH3DShaderVariable.h"

@interface TSCH3DExternalLabelAttribute : NSObject

@property (nonatomic) tvec2<float> value; // ivar: _value
@property (retain, nonatomic) TSCH3DShaderVariable *variable; // ivar: _variable


+(id)attributeWithVariable:(id)arg0 value:(struct tvec2<float> )arg1 ;
-(BOOL)isValid;
-(id)init;
-(id)initWithVariable:(id)arg0 value:(struct tvec2<float> )arg1 ;


@end


#endif