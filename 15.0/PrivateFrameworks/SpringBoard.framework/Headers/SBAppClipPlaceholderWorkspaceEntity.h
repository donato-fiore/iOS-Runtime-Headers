// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBAPPCLIPPLACEHOLDERWORKSPACEENTITY_H
#define SBAPPCLIPPLACEHOLDERWORKSPACEENTITY_H

@class NSString;


#import "SBWorkspaceEntity.h"

@interface SBAppClipPlaceholderWorkspaceEntity : SBWorkspaceEntity

@property (readonly, copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, copy, nonatomic) NSString *futureSceneIdentifier; // ivar: _futureSceneIdentifier
@property (readonly, nonatomic) BOOL needsUpdate; // ivar: _needsUpdate


+(BOOL)isAppClipUpdateAvailableForBundleIdentifier:(id)arg0 ;
-(BOOL)_supportsLayoutRole:(NSInteger)arg0 ;
-(BOOL)isAppClipPlaceholderEntity;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)supportsPresentationAtAnySize;
-(BOOL)wantsExclusiveForeground;
-(Class)viewControllerClass;
-(NSUInteger)hash;
-(id)appClipPlaceholderEntity;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)entityGenerator:(SEL)arg0 ;
-(id)initWithBundleIdentifier:(id)arg0 futureSceneIdentifier:(id)arg1 needsUpdate:(BOOL)arg2 ;


@end


#endif