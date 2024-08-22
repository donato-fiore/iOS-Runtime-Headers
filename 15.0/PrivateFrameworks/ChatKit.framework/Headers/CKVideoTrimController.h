// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKVIDEOTRIMCONTROLLER_H
#define CKVIDEOTRIMCONTROLLER_H

@class NSString;
@protocol UIVideoEditorControllerDelegatePrivate, UINavigationControllerDelegate, CKTrimControllerDelegate;

#import <Foundation/Foundation.h>

#import "CKUIVideoEditorController.h"
#import "CKMediaObject.h"

@interface CKVideoTrimController : NSObject <UIVideoEditorControllerDelegatePrivate, UINavigationControllerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CKTrimControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) CKUIVideoEditorController *editVideoVC; // ivar: _editVideoVC
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CKMediaObject *originalMediaObject; // ivar: _originalMediaObject
@property (readonly) Class superclass;
@property (retain, nonatomic) CKMediaObject *trimmedMediaObject; // ivar: _trimmedMediaObject


-(id)initWithMediaObject:(id)arg0 maxTrimDuration:(CGFloat)arg1 ;
-(void)dealloc;
-(void)videoEditorController:(id)arg0 didFailWithError:(id)arg1 ;
-(void)videoEditorController:(id)arg0 didSaveEditedVideoToPath:(id)arg1 ;
-(void)videoEditorController:(id)arg0 didTrimVideoWithOptions:(id)arg1 ;
-(void)videoEditorControllerDidCancel:(id)arg0 ;


@end


#endif