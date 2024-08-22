// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SIRIUISELECTIONTEMPLATEVIEWCONTROLLER_H
#define SIRIUISELECTIONTEMPLATEVIEWCONTROLLER_H

@protocol SiriUISelectionTemplateViewControllerDelegate, SiriUISelectionTemplateModel;


#import "SiriUISettingTemplateViewController.h"
#import "SiriUISelectionTemplateView.h"

@interface SiriUISelectionTemplateViewController : SiriUISettingTemplateViewController

@property (weak, nonatomic) NSObject<SiriUISelectionTemplateViewControllerDelegate> *delegate;
@property (nonatomic) BOOL selected;
@property (retain, nonatomic) NSObject<SiriUISelectionTemplateModel> *templateModel;
@property (retain, nonatomic) SiriUISelectionTemplateView *view;


-(Class)templateViewClass;
-(void)_didSelectChoiceFromSender:(id)arg0 ;
-(void)loadView;


@end


#endif