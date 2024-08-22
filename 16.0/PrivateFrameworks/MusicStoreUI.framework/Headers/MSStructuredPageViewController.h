// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MSSTRUCTUREDPAGEVIEWCONTROLLER_H
#define MSSTRUCTUREDPAGEVIEWCONTROLLER_H

@class SUStructuredPageGroupedViewController, SUSegmentedControl, NSIndexPath, SUAudioPlayer, SUPlayerStatus;



@interface MSStructuredPageViewController : SUStructuredPageGroupedViewController {
    SUSegmentedControl *_inlineSegmentedControl;
    NSIndexPath *_previewIndexPath;
    SUAudioPlayer *_previewPlayer;
    SUPlayerStatus *_previewStatus;
}




-(BOOL)_handleInlinePreviewForIndexPath:(id)arg0 ;
-(BOOL)_handleMediaPreviewForIndexPath:(id)arg0 ;
-(BOOL)_handlePreviewForIndexPath:(id)arg0 ;
-(BOOL)canDisplaySectionGroup:(id)arg0 ;
-(BOOL)canSelectRowAtIndexPath:(id)arg0 ;
-(BOOL)handleSelectionForIndexPath:(id)arg0 tapCount:(NSInteger)arg1 ;
-(BOOL)purchaseItemAtIndexPath:(id)arg0 ;
-(id)init;
-(id)setDisplayedSectionGroup:(id)arg0 ;
-(void)_playerStatusChangeNotification:(id)arg0 ;
-(void)_setPreviewStatus:(id)arg0 forIndexPath:(id)arg1 animated:(BOOL)arg2 ;
-(void)_stopPreviewPlayback;
-(void)applicationDidEnterBackground;
-(void)dealloc;
-(void)reloadWithStorePage:(id)arg0 forURL:(id)arg1 ;
-(void)setSkLoading:(BOOL)arg0 ;
-(void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif