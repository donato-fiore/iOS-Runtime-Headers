// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PHLIMITEDLIBRARYPICKERDELEGATE_H
#define PHLIMITEDLIBRARYPICKERDELEGATE_H

@class PLAssetsdClient, NSString;
@protocol UINavigationControllerDelegate, UIImagePickerControllerDelegate, UIAdaptivePresentationControllerDelegate;

#import <Foundation/Foundation.h>


@interface PHLimitedLibraryPickerDelegate : NSObject <UINavigationControllerDelegate, UIImagePickerControllerDelegate, UIAdaptivePresentationControllerDelegate>



@property (retain, nonatomic) PLAssetsdClient *assetsdClient; // ivar: _assetsdClient
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *dismissalBlock; // ivar: _dismissalBlock
@property (copy, nonatomic) id *finishedPickingBlock; // ivar: _finishedPickingBlock
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)_dismissImagePickerController:(id)arg0 ;
-(void)dismissImagePickerController:(id)arg0 ;
-(void)imagePickerController:(id)arg0 didFinishPickingMediaWithInfo:(id)arg1 ;
-(void)imagePickerController:(id)arg0 didFinishPickingMultipleMediaWithInfo:(id)arg1 ;
-(void)imagePickerControllerDidCancel:(id)arg0 ;
-(void)presentationControllerDidDismiss:(id)arg0 ;


@end


#endif