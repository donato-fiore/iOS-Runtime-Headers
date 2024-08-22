// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SCNCOMMONPROFILEPROGRAMGENERATORMETAL_H
#define SCNCOMMONPROFILEPROGRAMGENERATORMETAL_H

@class NSString, NSArray;


#import "SCNCommonProfileProgramGenerator.h"

@interface SCNCommonProfileProgramGeneratorMetal : SCNCommonProfileProgramGenerator {
    BOOL _allowHotReload;
    BOOL _useFunctionConstants;
    NSString *_originalSourceCode;
    NSArray *_injectionPointRanges;
    NSString *_originalLightingSourceCode;
    NSArray *_lightingInjectionPointRanges;
}




-(?)_newProgramWithHashCode:(?)arg0 engineContextintrospectionDataPtr;
-(?)_newProgramWithHashCodeWithFunctionConstants:(?)arg0 engineContextintrospectionDataPtr;
-(?)collectShaderForProgram:(?)arg0 newVertexFunctionName:(?)arg1 newFragmentFunctionName:(?)arg2 sourceCodeBlockadditionalFileBlock;
-(id)initAllowingHotReload:(BOOL)arg0 ;
-(int)profile;
-(void)_loadSourceCode;
-(void)dealloc;
-(void)emptyShaderCache;


@end


#endif