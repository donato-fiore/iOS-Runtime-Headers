// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UISTATUSBARBREADCRUMBITEMVIEW_H
#define UISTATUSBARBREADCRUMBITEMVIEW_H

@class NSString;


#import "UIStatusBarSystemNavigationItemView.h"
#import "UISystemNavigationAction.h"

@interface UIStatusBarBreadcrumbItemView : UIStatusBarSystemNavigationItemView

@property (retain, nonatomic) NSString *destinationText; // ivar: _destinationText
@property (retain, nonatomic) UISystemNavigationAction *systemNavigationAction; // ivar: _systemNavigationAction


-(BOOL)updateForNewData:(id)arg0 actions:(int)arg1 ;
-(CGFloat)extraRightPadding;
-(NSInteger)labelLineBreakMode;
-(id)shortenedTitleWithCompressionLevel:(int)arg0 ;
-(void)userDidActivateButton:(id)arg0 ;


@end


#endif