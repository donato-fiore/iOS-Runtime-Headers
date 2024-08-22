// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIRIUIBASETEMPLATEVIEWCONTROLLER_H
#define SIRIUIBASETEMPLATEVIEWCONTROLLER_H



#import "SiriUITemplateViewController.h"
#import "SiriUIBaseTemplateView.h"

@interface SiriUIBaseTemplateViewController : SiriUITemplateViewController

@property (retain, nonatomic) SiriUIBaseTemplateView *view;


-(Class)templateViewClass;
-(void)loadView;


@end


#endif