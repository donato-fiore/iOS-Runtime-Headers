// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBFLUIDSWITCHERSPACETITLEITEMCONTROLLER_H
#define SBFLUIDSWITCHERSPACETITLEITEMCONTROLLER_H

@class FBSDisplayIdentity, NSArray, NSMutableDictionary, NSString;
@protocol SBDeviceApplicationSceneHandleObserver, SBIconObserver, BSInvalidatable;

#import <Foundation/Foundation.h>

#import "SBAppLayout.h"

@interface SBFluidSwitcherSpaceTitleItemController : NSObject <SBDeviceApplicationSceneHandleObserver, SBIconObserver, BSInvalidatable>

 {
    SBAppLayout *_appLayout;
    FBSDisplayIdentity *_displayIdentity;
    NSArray *_displayItems;
    NSMutableDictionary *_displayItemToIcon;
    NSMutableDictionary *_displayItemToLoadedImage;
    NSMutableDictionary *_displayItemToSceneHandle;
    BOOL _invalidated;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isChamoisWindowingEnabled; // ivar: _isChamoisWindowingEnabled
@property (nonatomic) NSUInteger multiWindowIndicatorRoleMask; // ivar: _multiWindowIndicatorRoleMask
@property (readonly) Class superclass;
@property (copy, nonatomic) id *updateHandler; // ivar: _updateHandler
@property (nonatomic, getter=isUsingDarkLabels) BOOL useDarkLabels; // ivar: _useDarkLabels


-(id)_computeHeaderItems;
-(id)_iconForDisplayItem:(id)arg0 ;
-(id)initWithAppLayout:(id)arg0 applicationSceneHandleProvider:(id)arg1 displayIdentity:(id)arg2 showCanvasTitles:(BOOL)arg3 isChamoisWindowingEnabled:(BOOL)arg4 ;
-(void)_loadIconForDisplayItem:(id)arg0 ;
-(void)_performUpdateHandler;
-(void)_updateDisplayItemIcons;
-(void)dealloc;
-(void)iconImageDidUpdate:(id)arg0 ;
-(void)invalidate;
-(void)sceneHandle:(id)arg0 didChangeSceneTitle:(id)arg1 ;


@end


#endif