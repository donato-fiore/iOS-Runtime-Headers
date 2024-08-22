// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef QLTOOLBARBUTTONITEMREPRESENTATION_H
#define QLTOOLBARBUTTONITEMREPRESENTATION_H

@class UIBarButtonItem, NSString, UILongPressGestureRecognizer;


#import "QLToolbarButton.h"
#import "QLPreviewController.h"

@interface QLToolbarButtonItemRepresentation : UIBarButtonItem

@property BOOL disappearsOnTap; // ivar: _disappearsOnTap
@property (retain) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer; // ivar: _longPressGestureRecognizer
@property (weak) QLToolbarButton *originalButton; // ivar: _originalButton
@property NSUInteger placement; // ivar: _placement
@property (weak) QLPreviewController *presentingViewController; // ivar: _presentingViewController


-(BOOL)isEqual:(id)arg0 ;
-(void)setLongPressTarget:(id)arg0 action:(SEL)arg1 ;


@end


#endif