// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NUCOMPOSITIONSOURCEDEFINITION_H
#define NUCOMPOSITIONSOURCEDEFINITION_H



#import "NUSourceDefinition.h"
#import "NUComposition.h"

@interface NUCompositionSourceDefinition : NUSourceDefinition

@property (readonly) NUComposition *composition; // ivar: _composition


-(id)init;
-(id)initWithComposition:(id)arg0 ;
-(id)sourceContainerNodeWithIdentifier:(id)arg0 error:(*id)arg1 ;


@end


#endif