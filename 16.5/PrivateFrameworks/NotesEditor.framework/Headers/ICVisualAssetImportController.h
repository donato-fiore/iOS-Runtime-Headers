// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICVISUALASSETIMPORTCONTROLLER_H
#define ICVISUALASSETIMPORTCONTROLLER_H


#import <Foundation/Foundation.h>


@interface ICVisualAssetImportController : NSObject {
    ? noteEditorViewController;
    ? paperImageInsertionController;
    ? captureController;
    ? doNotAdvanceInsertionPointAfterInsertingAttachment;
}




-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNoteEditorViewController:(id)arg0 ;
-(void)addImageData:(id)arg0 typeIdentifier:(id)arg1 ;
-(void)addImageData:(id)arg0 typeIdentifier:(id)arg1 forceAddToPaper:(BOOL)arg2 ;
-(void)presentVisualAssetCaptureControllerWithDisableAutorotate:(BOOL)arg0 ;
-(void)presentVisualAssetPickerController;


@end


#endif