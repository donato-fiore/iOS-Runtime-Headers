// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FBSSCENEDEFINITION_H
#define FBSSCENEDEFINITION_H

@class NSString;
@protocol NSCopying, NSMutableCopying, BSDescriptionProviding;

#import <Foundation/Foundation.h>

#import "FBSSceneClientIdentity.h"
#import "FBSSceneIdentity.h"
#import "FBSSceneSpecification.h"

@interface FBSSceneDefinition : NSObject <NSCopying, NSMutableCopying, BSDescriptionProviding>



@property (copy, nonatomic) FBSSceneClientIdentity *clientIdentity; // ivar: _clientIdentity
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) FBSSceneIdentity *identity; // ivar: _identity
@property (copy, nonatomic) FBSSceneSpecification *specification; // ivar: _specification
@property (readonly) Class superclass;


+(id)definition;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isValid;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;


@end


#endif