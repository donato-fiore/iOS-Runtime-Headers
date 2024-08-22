// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIPRINTERTABLEVIEWCELL_H
#define UIPRINTERTABLEVIEWCELL_H

@class UITableViewCell, NSString, UIGestureRecognizer, PKPrinter;
@protocol UIPrinterAccessoryViewDelegate;


#import "UIPrinterAccessoryView.h"

@interface UIPrinterTableViewCell : UITableViewCell <UIPrinterAccessoryViewDelegate>



@property (nonatomic) BOOL checked;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIGestureRecognizer *expandedAccessoryTapRecognizer; // ivar: _expandedAccessoryTapRecognizer
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) PKPrinter *printer; // ivar: _printer
@property (retain, nonatomic) UIPrinterAccessoryView *printerAccessoryView; // ivar: _printerAccessoryView
@property (nonatomic) int printerState;
@property (readonly) Class superclass;


-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)expandedAccessoryAreaTapped;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)printerAccessoryViewInfoButtonPressed:(id)arg0 ;


@end


#endif