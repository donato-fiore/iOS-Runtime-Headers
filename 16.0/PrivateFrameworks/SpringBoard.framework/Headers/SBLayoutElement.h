// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBLAYOUTELEMENT_H
#define SBLAYOUTELEMENT_H

@class NSString;
@protocol SBLayoutElementDescriptor, SBWorkspaceEntityGenerating, BSDescriptionProviding, NSCopying;

#import <Foundation/Foundation.h>


@interface SBLayoutElement : NSObject <SBLayoutElementDescriptor, SBWorkspaceEntityGenerating, BSDescriptionProviding, NSCopying>

 {
    NSString *_uniqueIdentifier;
    NSInteger _layoutRole;
    NSUInteger _supportedLayoutRoles;
    NSUInteger _layoutAttributes;
    Class _viewControllerClass;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *entityGenerator; // ivar: _entityGenerator
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger layoutAttributes;
@property (readonly, nonatomic) NSInteger layoutRole;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger supportedLayoutRoles;
@property (readonly, copy, nonatomic) NSString *uniqueIdentifier;
@property (readonly, nonatomic) Class viewControllerClass;


+(id)elementWithDescriptor:(id)arg0 ;
+(id)elementWithDescriptor:(id)arg0 layoutRole:(NSInteger)arg1 ;
-(BOOL)hasLayoutAttributes:(NSUInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)supportsLayoutRole:(NSInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 layoutRole:(NSInteger)arg1 supportedLayoutRoles:(NSUInteger)arg2 layoutAttributes:(NSUInteger)arg3 viewControllerClass:(Class)arg4 entityGenerator:(id)arg5 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)workspaceEntity;


@end


#endif