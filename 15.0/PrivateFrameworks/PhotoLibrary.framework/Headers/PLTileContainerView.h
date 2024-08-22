// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLTILECONTAINERVIEW_H
#define PLTILECONTAINERVIEW_H

@class UIView;


#import "PLPhotoTileViewController.h"

@interface PLTileContainerView : UIView {
    PLPhotoTileViewController *_photoTileController;
}




-(BOOL)canBecomeFirstResponder;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 photoTileController:(id)arg1 ;
-(void)clearBackReference;
-(void)willMoveToSuperview:(id)arg0 ;


@end


#endif