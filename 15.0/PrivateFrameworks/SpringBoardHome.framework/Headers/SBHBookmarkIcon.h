// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBHBOOKMARKICON_H
#define SBHBOOKMARKICON_H

@class CPSWebClip, NSURL, UIWebClip;


#import "SBLeafIcon.h"
#import "SBHBookmark.h"

@interface SBHBookmarkIcon : SBLeafIcon

@property (readonly, nonatomic) CPSWebClip *appClip;
@property (retain, nonatomic) SBHBookmark *bookmark; // ivar: _bookmark
@property (readonly, nonatomic) NSURL *launchURL;
@property (readonly, nonatomic) UIWebClip *webClip;


-(BOOL)canBeAddedToMultiItemDrag;
-(BOOL)canBeAddedToSubfolder;
-(BOOL)isAppClipIcon;
-(BOOL)isBookmarkIcon;
-(id)_sbhIconLibraryOverrideCollationSectionTitle;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)draggingUserActivity;
-(id)initWithBookmark:(id)arg0 ;
-(id)uninstallAlertBody;
-(id)uninstallAlertTitle;


@end


#endif