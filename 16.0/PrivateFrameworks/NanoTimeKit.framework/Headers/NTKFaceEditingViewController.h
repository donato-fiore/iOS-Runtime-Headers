// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKFACEEDITINGVIEWCONTROLLER_H
#define NTKFACEEDITINGVIEWCONTROLLER_H

@class UIViewController;


#import "NTKFaceEditView.h"
#import "NTKFace.h"

@interface NTKFaceEditingViewController : UIViewController {
    NTKFaceEditView *_editView;
}


@property (readonly, nonatomic) NSInteger currentEditMode;
@property (readonly, nonatomic) NTKFace *face; // ivar: _face


-(id)initWithFace:(id)arg0 ;
-(void)activate;
-(void)deactivateWithCompletion:(id)arg0 ;
-(void)dealloc;
-(void)loadView;
-(void)willActivate;
-(void)willDeactivate;


@end


#endif