// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC12GAMECENTERUI38PLAYERAVATARPICKERACTIONIMPLEMENTATION_H
#define _TTC12GAMECENTERUI38PLAYERAVATARPICKERACTIONIMPLEMENTATION_H

@class SwiftObject;
@protocol CNPhotoPickerViewControllerDelegate;



@interface _TtC12GameCenterUI38PlayerAvatarPickerActionImplementation : SwiftObject <CNPhotoPickerViewControllerDelegate>

 {
    ? viewController;
    ? currentAction;
    ? currentAvatarChangeCompletion;
}




-(void)photoPicker:(id)arg0 didUpdatePhotoForContact:(id)arg1 withContactImage:(id)arg2 ;
-(void)photoPickerDidCancel:(id)arg0 ;


@end


#endif