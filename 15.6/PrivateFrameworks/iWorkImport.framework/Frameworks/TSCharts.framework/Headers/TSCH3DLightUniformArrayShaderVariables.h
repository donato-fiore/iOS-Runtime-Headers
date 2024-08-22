// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCH3DLIGHTUNIFORMARRAYSHADERVARIABLES_H
#define TSCH3DLIGHTUNIFORMARRAYSHADERVARIABLES_H


#import <Foundation/Foundation.h>

#import "TSCH3DUniformArrayShaderVariables.h"

@interface TSCH3DLightUniformArrayShaderVariables : NSObject {
    TSCH3DUniformArrayShaderVariables *_variables;
}




-(NSUInteger)arraySize;
-(id)variableAtIndex:(NSUInteger)arg0 name:(id)arg1 ;
-(void)addUniformsToShaderProgram:(id)arg0 size:(NSUInteger)arg1 ;
-(void)initializeArrayVariables;
-(void)initializePrefix:(id)arg0 ;


@end


#endif