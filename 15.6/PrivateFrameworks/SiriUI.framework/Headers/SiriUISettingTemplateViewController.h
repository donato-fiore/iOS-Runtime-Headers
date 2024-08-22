// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SIRIUISETTINGTEMPLATEVIEWCONTROLLER_H
#define SIRIUISETTINGTEMPLATEVIEWCONTROLLER_H

@protocol SiriUISettingTemplateModel;


#import "SiriUIBaseTemplateViewController.h"
#import "SiriUISettingTemplateView.h"

@interface SiriUISettingTemplateViewController : SiriUIBaseTemplateViewController

@property (retain, nonatomic) NSObject<SiriUISettingTemplateModel> *templateModel;
@property (retain, nonatomic) SiriUISettingTemplateView *view;


-(Class)templateViewClass;


@end


#endif