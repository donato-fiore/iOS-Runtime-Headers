// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FBSSCENESPECIFICATION_H
#define FBSSCENESPECIFICATION_H

@class NSString;
@protocol NSCopying, BSDescriptionProviding;

#import <Foundation/Foundation.h>


@interface FBSSceneSpecification : NSObject <NSCopying, BSDescriptionProviding>

 {
    BOOL _forLocalSynchronousSceneClientProvider;
}


@property (readonly, nonatomic) Class clientAgentClass;
@property (readonly, nonatomic) Class clientSettingsClass;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) Class hostAgentClass;
@property (readonly, nonatomic) Class settingsClass;
@property (readonly) Class superclass;
@property (readonly, nonatomic) Class transitionContextClass;


+(*unk)_swizzleMethodOnClass:(Class)arg0 originalSelector:(SEL)arg1 block:(id)arg2 ;
+(id)specification;
+(void)initialize;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isValid;
-(id)_copyForLocalSynchronousSceneClientProvider;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;


@end


#endif