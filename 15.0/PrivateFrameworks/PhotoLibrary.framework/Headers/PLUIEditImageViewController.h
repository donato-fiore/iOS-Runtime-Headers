// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLUIEDITIMAGEVIEWCONTROLLER_H
#define PLUIEDITIMAGEVIEWCONTROLLER_H



#import "PLUIImageViewController.h"

@interface PLUIEditImageViewController : PLUIImageViewController {
    int _saveOptions;
}


@property (nonatomic) id *delegate; // ivar: _delegate
@property (nonatomic) int mode; // ivar: _mode


-(NSUInteger)_contentAutoresizingMask;
-(NSUInteger)_tileAutoresizingMask;
-(id)imageTile;
-(id)initWithPhoto:(id)arg0 ;
-(id)photo;
-(int)cropOverlayMode;
-(int)saveOptions;
-(unsigned short)imageFormat;
-(void)cropOverlay:(id)arg0 didFinishSaving:(id)arg1 ;
-(void)cropOverlayWasCancelled:(id)arg0 ;
-(void)cropOverlayWasOKed:(id)arg0 ;
-(void)dealloc;
-(void)setImageSavingOptions:(int)arg0 ;


@end


#endif