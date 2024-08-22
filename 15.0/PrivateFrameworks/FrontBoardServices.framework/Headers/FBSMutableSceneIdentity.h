// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FBSMUTABLESCENEIDENTITY_H
#define FBSMUTABLESCENEIDENTITY_H

@class NSString;


#import "FBSSceneIdentity.h"

@interface FBSMutableSceneIdentity : FBSSceneIdentity

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *workspaceIdentifier;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif