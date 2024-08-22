// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTCV12GAMECENTERUI16AVATAREDITORVIEW11COORDINATOR_H
#define _TTCV12GAMECENTERUI16AVATAREDITORVIEW11COORDINATOR_H

@protocol CNPhotoPickerViewControllerDelegate;

#import <Foundation/Foundation.h>


@interface _TtCV12GameCenterUI16AvatarEditorView11Coordinator : NSObject <CNPhotoPickerViewControllerDelegate>

 {
    ? parent;
}




-(id)init;
-(void)photoPicker:(id)arg0 didUpdatePhotoForContact:(id)arg1 withContactImage:(id)arg2 ;
-(void)photoPickerDidCancel:(id)arg0 ;


@end


#endif