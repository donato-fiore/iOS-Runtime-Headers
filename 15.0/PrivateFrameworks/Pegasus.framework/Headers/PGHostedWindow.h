// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGHOSTEDWINDOW_H
#define PGHOSTEDWINDOW_H

@class UIHostedWindow;


#import "PGHostedWindowHostingHandle.h"

@interface PGHostedWindow : UIHostedWindow

@property (readonly, nonatomic) PGHostedWindowHostingHandle *hostedWindowHostingHandle;


-(BOOL)_canBecomeKeyWindow;
-(BOOL)canBecomeFirstResponder;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)dealloc;


@end


#endif