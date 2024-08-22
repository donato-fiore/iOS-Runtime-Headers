// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSWITCHERSHELF_H
#define SBSWITCHERSHELF_H

@class NSString;
@protocol BSDescriptionProviding, NSCopying, SBSwitcherLayoutElementProviding;

#import <Foundation/Foundation.h>


@interface SBSwitcherShelf : NSObject <BSDescriptionProviding, NSCopying, SBSwitcherLayoutElementProviding>



@property (readonly, copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger displayMode; // ivar: _displayMode
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger layoutRole; // ivar: _layoutRole
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *uniqueIdentifier; // ivar: _uniqueIdentifier


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)switcherLayoutElementType;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithBundleIdentifier:(id)arg0 layoutRole:(NSInteger)arg1 displayMode:(NSUInteger)arg2 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;


@end


#endif