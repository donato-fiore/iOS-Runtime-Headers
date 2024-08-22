// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBBOOKMARKICON_H
#define SBBOOKMARKICON_H

@class SBHBookmarkIcon;



@interface SBBookmarkIcon : SBHBookmarkIcon

@property (readonly, nonatomic) BOOL displaysAppStoreURLShortcutItem;
@property (readonly, nonatomic) BOOL displaysShareBookmarkShortcutItem;
@property (readonly, nonatomic) BOOL representsWebApp;


-(BOOL)_isSaneURL;
-(id)applicationToLaunch;
-(id)representedSceneIdentifier;


@end


#endif