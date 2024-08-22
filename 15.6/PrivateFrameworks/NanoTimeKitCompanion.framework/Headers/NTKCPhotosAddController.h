// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKCPHOTOSADDCONTROLLER_H
#define NTKCPHOTOSADDCONTROLLER_H

@class NSString;
@protocol PHPickerViewControllerDelegate, UINavigationControllerDelegate, UIAdaptivePresentationControllerDelegate;

#import <Foundation/Foundation.h>


@interface NTKCPhotosAddController : NSObject <PHPickerViewControllerDelegate, UINavigationControllerDelegate, UIAdaptivePresentationControllerDelegate>



@property (copy, nonatomic) id *completion; // ivar: _completion
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_sharedInstance;
+(id)pickerConfigurationWithLimit:(NSUInteger)arg0 ;
+(void)presentPhotosAddControllerFromViewController:(id)arg0 configuration:(id)arg1 withCompletion:(id)arg2 ;
+(void)presentPhotosAddControllerFromViewController:(id)arg0 selectionLimit:(NSUInteger)arg1 withCompletion:(id)arg2 ;
+(void)presentPhotosAddControllerFromViewController:(id)arg0 withCompletion:(id)arg1 ;
+(void)presentSinglePhotoAddControllerFromViewController:(id)arg0 withCompletion:(id)arg1 ;
-(void)picker:(id)arg0 didFinishPicking:(id)arg1 ;
-(void)presentationControllerDidDismiss:(id)arg0 ;


@end


#endif