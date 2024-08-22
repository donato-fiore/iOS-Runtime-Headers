// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPALETTEVIEWCONTROLLER_H
#define PKPALETTEVIEWCONTROLLER_H

@class UIViewController;
@protocol PKPaletteViewControllerDelegate;


#import "PKPaletteHostView.h"
#import "PKDrawingPaletteView.h"

@interface PKPaletteViewController : UIViewController {
    PKPaletteHostView *_hostView;
}


@property (weak, nonatomic) NSObject<PKPaletteViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) PKDrawingPaletteView *paletteView; // ivar: _paletteView


-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif