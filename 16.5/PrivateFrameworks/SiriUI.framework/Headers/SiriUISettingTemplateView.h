// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIRIUISETTINGTEMPLATEVIEW_H
#define SIRIUISETTINGTEMPLATEVIEW_H

@class UILabel;
@protocol SiriUISettingTemplateModel;


#import "SiriUIBaseTemplateView.h"

@interface SiriUISettingTemplateView : SiriUIBaseTemplateView {
    UILabel *_textLabel;
}


@property (weak, nonatomic) NSObject<SiriUISettingTemplateModel> *dataSource;


-(CGFloat)desiredHeight;
-(id)initWithDataSource:(id)arg0 ;
-(void)layoutSubviews;
-(void)reloadData;


@end


#endif