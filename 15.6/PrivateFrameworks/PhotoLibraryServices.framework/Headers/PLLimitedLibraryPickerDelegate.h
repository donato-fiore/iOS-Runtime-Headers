// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLLIMITEDLIBRARYPICKERDELEGATE_H
#define PLLIMITEDLIBRARYPICKERDELEGATE_H

@class PLAssetsdClient;

#import <Foundation/Foundation.h>


@interface PLLimitedLibraryPickerDelegate : NSObject

@property (retain, nonatomic) PLAssetsdClient *assetsdClient; // ivar: _assetsdClient
@property (copy, nonatomic) id *dismissalBlock; // ivar: _dismissalBlock
@property (copy, nonatomic) id *finishedPickingBlock; // ivar: _finishedPickingBlock


-(void)_dismissImagePickerController:(id)arg0 ;
-(void)dismissImagePickerController:(id)arg0 ;
-(void)imagePickerController:(id)arg0 didFinishPickingMediaWithInfo:(id)arg1 ;
-(void)imagePickerController:(id)arg0 didFinishPickingMultipleMediaWithInfo:(id)arg1 ;
-(void)imagePickerControllerDidCancel:(id)arg0 ;


@end


#endif