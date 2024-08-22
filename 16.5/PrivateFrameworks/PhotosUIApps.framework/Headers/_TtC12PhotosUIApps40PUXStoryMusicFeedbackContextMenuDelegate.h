// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC12PHOTOSUIAPPS40PUXSTORYMUSICFEEDBACKCONTEXTMENUDELEGATE_H
#define _TTC12PHOTOSUIAPPS40PUXSTORYMUSICFEEDBACKCONTEXTMENUDELEGATE_H

@protocol UIContextMenuInteractionDelegate;

#import <Foundation/Foundation.h>


@interface _TtC12PhotosUIApps40PUXStoryMusicFeedbackContextMenuDelegate : NSObject <UIContextMenuInteractionDelegate>

 {
    ? storyViewModel;
    ? audioAssetProvider;
    ? presentationViewController;
}




-(id)contextMenuInteraction:(id)arg0 configurationForMenuAtLocation:(struct CGPoint )arg1 ;
-(id)contextMenuInteraction:(id)arg0 previewForHighlightingMenuWithConfiguration:(id)arg1 ;
-(id)init;


@end


#endif