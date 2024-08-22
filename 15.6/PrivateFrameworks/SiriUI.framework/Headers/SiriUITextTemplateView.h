// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SIRIUITEXTTEMPLATEVIEW_H
#define SIRIUITEXTTEMPLATEVIEW_H

@class UIImageView, NSString, UILabel, UIButton;
@protocol SiriUITemplateView, SiriUITextTemplateModel, SiriUITemplatedView;


#import "SiriUILabelStackTemplateView.h"

@interface SiriUITextTemplateView : SiriUILabelStackTemplateView <SiriUITemplateView>



@property (retain, nonatomic) UIImageView *chevronView; // ivar: _chevronView
@property (weak) NSObject<SiriUITextTemplateModel> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UILabel *detailTextLabel; // ivar: _detailTextLabel
@property (retain, nonatomic) UIButton *disclosureButton; // ivar: _disclosureButton
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (weak, nonatomic) NSObject<SiriUITemplatedView> *templatedSuperview;


-(id)initWithDataSource:(id)arg0 ;
-(void)_setupDisclosureButton;
-(void)addTargetForDisclosure:(id)arg0 action:(SEL)arg1 ;
-(void)layoutDetailText;
-(void)layoutSubviews;
-(void)reloadData;
-(void)removeTargetForDisclosure:(id)arg0 action:(SEL)arg1 ;
-(void)setupDisclosureIndicator;


@end


#endif