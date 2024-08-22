// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MUPLACESECTIONHEADERVIEW_H
#define MUPLACESECTIONHEADERVIEW_H

@class UIView, UILabel, UIButton, UIFocusGuide, NSString;
@protocol MKActivityObserving;


#import "MUPlaceSectionHeaderViewModel.h"

@interface MUPlaceSectionHeaderView : UIView <MKActivityObserving>

 {
    UILabel *_titleLabel;
    UIButton *_seeAllButton;
    UIFocusGuide *_headerFocusGuide;
    MUPlaceSectionHeaderViewModel *_headerViewModel;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithViewModel:(id)arg0 ;
-(void)_contentSizeDidChange;
-(void)_setupHeader;
-(void)beginAnimatingActivityIndicator;
-(void)endAnimatingActivityIndicatorWithError:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif