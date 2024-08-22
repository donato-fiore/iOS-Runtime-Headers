// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBSAPPDRAGLOCALCONTEXT_H
#define SBSAPPDRAGLOCALCONTEXT_H

@class NSString, NSSet, NSArray, NSURL, UIView, NSUserActivity;

#import <Foundation/Foundation.h>


@interface SBSAppDragLocalContext : NSObject

@property (copy, nonatomic) NSString *activeCustomIconDataSourceUniqueIdentifier; // ivar: _activeCustomIconDataSourceUniqueIdentifier
@property (copy, nonatomic) NSString *applicationBundleIdentifier; // ivar: _applicationBundleIdentifier
@property (nonatomic) BOOL cancelsViaScaleAndFade; // ivar: _cancelsViaScaleAndFade
@property (copy, nonatomic) NSSet *containedIconIdentifiers; // ivar: _containedIconIdentifiers
@property (copy, nonatomic) NSArray *customIconDataSourceConfigurations; // ivar: _customIconDataSourceConfigurations
@property (copy, nonatomic) NSString *draggedSceneIdentifier; // ivar: _draggedSceneIdentifier
@property (copy, nonatomic) NSString *droppedIconIdentifier; // ivar: _droppedIconIdentifier
@property (nonatomic) NSUInteger gridSizeClass; // ivar: _gridSizeClass
@property (readonly, copy, nonatomic) NSSet *launchActions; // ivar: _launchActions
@property (copy, nonatomic) NSURL *launchURL; // ivar: _launchURL
@property (retain, nonatomic) UIView *portaledPreview; // ivar: _portaledPreview
@property (nonatomic, getter=isSourceLocal) BOOL sourceLocal; // ivar: _sourceLocal
@property (readonly, nonatomic) NSInteger startLocation; // ivar: _startLocation
@property (retain, nonatomic) NSUserActivity *userActivity; // ivar: _userActivity


-(id)description;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithApplicationBundleIdentifier:(id)arg0 withLaunchActions:(id)arg1 startLocation:(NSInteger)arg2 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;


@end


#endif