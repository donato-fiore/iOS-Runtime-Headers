// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIRIUIMESSAGECONTENTTEMPLATEVIEWCONTROLLER_H
#define SIRIUIMESSAGECONTENTTEMPLATEVIEWCONTROLLER_H

@protocol SiriUIMessageContentTemplateModel;


#import "SiriUIBaseTemplateViewController.h"
#import "SiriUIMessageContentTemplateView.h"

@interface SiriUIMessageContentTemplateViewController : SiriUIBaseTemplateViewController

@property (retain, nonatomic) NSObject<SiriUIMessageContentTemplateModel> *templateModel;
@property (retain, nonatomic) SiriUIMessageContentTemplateView *view;


-(Class)templateViewClass;


@end


#endif