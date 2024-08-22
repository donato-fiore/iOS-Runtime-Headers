// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKTEXTINPUTDEBUGDRAWINGENTRYCELL_H
#define PKTEXTINPUTDEBUGDRAWINGENTRYCELL_H

@class UITableViewCell, UIImageView;


#import "PKDrawing.h"

@interface PKTextInputDebugDrawingEntryCell : UITableViewCell {
    UIImageView *_drawingImageView;
}


@property (retain, nonatomic) PKDrawing *drawing; // ivar: _drawing


-(void)_updateDrawingView;


@end


#endif