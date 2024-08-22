// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC12PHOTOSUIAPPS19PUXSTORYASSETPICKER_H
#define _TTC12PHOTOSUIAPPS19PUXSTORYASSETPICKER_H

@protocol PUStoryAssetPickerHelperDelegate, UIAdaptivePresentationControllerDelegate;

#import <Foundation/Foundation.h>


@interface _TtC12PhotosUIApps19PUXStoryAssetPicker : NSObject <PUStoryAssetPickerHelperDelegate, UIAdaptivePresentationControllerDelegate>

 {
    ? viewModel;
    ? pickerHelper;
    ? completion;
}




-(id)init;
-(void)presentationControllerDidDismiss:(id)arg0 ;
-(void)storyPickerHelper:(id)arg0 didFinishPicking:(id)arg1 promotedAssets:(id)arg2 demotedAssets:(id)arg3 ;


@end


#endif