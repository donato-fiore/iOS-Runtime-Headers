// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFDRAWERPANECUSTOMTITLEHEADERVIEW_H
#define WFDRAWERPANECUSTOMTITLEHEADERVIEW_H

@class UIView, NSString;
@protocol WFDrawerPaneHeaderView, WFDrawerPaneHeaderViewDelegate;


#import "WFDrawerPaneCloseButton.h"

@interface WFDrawerPaneCustomTitleHeaderView : UIView <WFDrawerPaneHeaderView>



@property (readonly, weak, nonatomic) WFDrawerPaneCloseButton *closeButton; // ivar: _closeButton
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<WFDrawerPaneHeaderViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, weak, nonatomic) UIView *titleView; // ivar: _titleView


-(id)initWithTitleView:(id)arg0 ;
-(id)layoutConstraints;
-(void)closeButtonTouchedUp:(id)arg0 ;


@end


#endif