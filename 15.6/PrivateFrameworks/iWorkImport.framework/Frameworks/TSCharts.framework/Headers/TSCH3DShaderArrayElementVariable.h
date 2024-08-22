// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCH3DSHADERARRAYELEMENTVARIABLE_H
#define TSCH3DSHADERARRAYELEMENTVARIABLE_H



#import "TSCH3DShaderVariable.h"

@interface TSCH3DShaderArrayElementVariable : TSCH3DShaderVariable {
    TSCH3DShaderVariable *_parent;
    NSUInteger _index;
}




+(id)variableWithParentVariable:(id)arg0 index:(NSUInteger)arg1 ;
-(id)initWithParentVariable:(id)arg0 index:(NSUInteger)arg1 ;


@end


#endif