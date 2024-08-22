// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC7CHATKIT16CKCHATTIPMANAGER_H
#define _TTC7CHATKIT16CKCHATTIPMANAGER_H

@protocol UIPopoverPresentationControllerDelegate;

#import <Foundation/Foundation.h>


@interface _TtC7ChatKit16CKChatTipManager : NSObject <UIPopoverPresentationControllerDelegate>

 {
    ? chatController;
    ? tipPopoverController;
    ? $__lazy_storage_$_dictationLongPressGesture;
}




-(id)init;
-(id)initWithChatController:(id)arg0 ;
-(void)chatControllerDidAppear;
-(void)chatControllerDidLoad;
-(void)chatViewDidDisappear;
-(void)chatViewDidPresentAudioMessagePlugin;
-(void)chatViewMorePluginsBrowserDidDismiss;
-(void)dealloc;
-(void)handleDictationButtonLongPressGesture:(id)arg0 ;
-(void)presentationControllerDidDismiss:(id)arg0 ;


@end


#endif