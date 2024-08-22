// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SIRIUIACTIVITYINDICATORTEMPLATEVIEWCONTROLLER_H
#define SIRIUIACTIVITYINDICATORTEMPLATEVIEWCONTROLLER_H

@protocol SiriUIActivityIndicatorTemplateModel;


#import "SiriUITemplateViewController.h"
#import "SiriUIActivityIndicatorTemplateView.h"

@interface SiriUIActivityIndicatorTemplateViewController : SiriUITemplateViewController

@property (retain, nonatomic) NSObject<SiriUIActivityIndicatorTemplateModel> *templateModel;
@property (retain, nonatomic) SiriUIActivityIndicatorTemplateView *view;


-(void)loadView;


@end


#endif