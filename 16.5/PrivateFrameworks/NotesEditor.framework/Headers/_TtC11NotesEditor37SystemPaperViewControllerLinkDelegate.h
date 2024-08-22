// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC11NOTESEDITOR37SYSTEMPAPERVIEWCONTROLLERLINKDELEGATE_H
#define _TTC11NOTESEDITOR37SYSTEMPAPERVIEWCONTROLLERLINKDELEGATE_H

@class SwiftObject;
@protocol _TtP8PaperKit40PKPaperTextViewLinkingControllerDelegate_;



@interface _TtC11NotesEditor37SystemPaperViewControllerLinkDelegate : SwiftObject <_TtP8PaperKit40PKPaperTextViewLinkingControllerDelegate_>

 {
    ? linkBarViewController;
}




-(BOOL)linkingController:(id)arg0 shouldAddSynapseLinkItem:(id)arg1 ;
-(id)linkingControllerLinksMenuExcludedUserActivities:(id)arg0 ;
-(void)linkingControllerLinksMightHaveChanged:(id)arg0 ;


@end


#endif