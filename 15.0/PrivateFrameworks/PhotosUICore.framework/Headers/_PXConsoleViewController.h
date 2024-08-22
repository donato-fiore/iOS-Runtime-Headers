// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _PXCONSOLEVIEWCONTROLLER_H
#define _PXCONSOLEVIEWCONTROLLER_H

@class UIViewController, UIBarButtonItem, UITextView;



@interface _PXConsoleViewController : UIViewController

@property (readonly, nonatomic) UIBarButtonItem *_shareBarButtonItem; // ivar: __shareBarButtonItem
@property (readonly, nonatomic) UITextView *_textView; // ivar: __textView
@property (nonatomic) BOOL toolBarWasHidden; // ivar: _toolBarWasHidden


-(id)init;
-(void)_presentSharingViewController:(id)arg0 ;
-(void)appendOutput:(id)arg0 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif