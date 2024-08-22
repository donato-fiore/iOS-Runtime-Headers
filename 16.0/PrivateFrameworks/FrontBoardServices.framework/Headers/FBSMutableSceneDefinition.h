// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FBSMUTABLESCENEDEFINITION_H
#define FBSMUTABLESCENEDEFINITION_H



#import "FBSSceneDefinition.h"
#import "FBSSceneClientIdentity.h"
#import "FBSSceneIdentity.h"
#import "FBSSceneSpecification.h"

@interface FBSMutableSceneDefinition : FBSSceneDefinition

@property (copy, nonatomic) FBSSceneClientIdentity *clientIdentity;
@property (copy, nonatomic) FBSSceneIdentity *identity;
@property (copy, nonatomic) FBSSceneSpecification *specification;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif