// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIRIUISELECTIONTEMPLATEVIEW_H
#define SIRIUISELECTIONTEMPLATEVIEW_H

@class UIImageView, UIButton;
@protocol SiriUISelectionTemplateModel;


#import "SiriUISettingTemplateView.h"

@interface SiriUISelectionTemplateView : SiriUISettingTemplateView {
    UIImageView *_checkmarkImageView;
    UIButton *_selectionButton;
}


@property (weak, nonatomic) NSObject<SiriUISelectionTemplateModel> *dataSource;


-(id)initWithDataSource:(id)arg0 ;
-(void)addTargetForSelectionEvent:(id)arg0 action:(SEL)arg1 ;
-(void)layoutSubviews;
-(void)reloadData;
-(void)removeTargetForSelectionEvent:(id)arg0 action:(SEL)arg1 ;


@end


#endif