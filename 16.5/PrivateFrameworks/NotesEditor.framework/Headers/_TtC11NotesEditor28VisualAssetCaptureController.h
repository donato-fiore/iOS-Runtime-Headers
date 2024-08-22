// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC11NOTESEDITOR28VISUALASSETCAPTURECONTROLLER_H
#define _TTC11NOTESEDITOR28VISUALASSETCAPTURECONTROLLER_H

@protocol UIImagePickerControllerDelegate, UINavigationControllerDelegate;

#import <Foundation/Foundation.h>


@interface _TtC11NotesEditor28VisualAssetCaptureController : NSObject <UIImagePickerControllerDelegate, UINavigationControllerDelegate>

 {
    ? delegate;
    ? note;
}




-(id)init;
-(void)imagePickerController:(id)arg0 didFinishPickingMediaWithInfo:(id)arg1 ;
-(void)imagePickerControllerDidCancel:(id)arg0 ;


@end


#endif