// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIRIUIACTIVITYINDICATORTEMPLATEVIEW_H
#define SIRIUIACTIVITYINDICATORTEMPLATEVIEW_H

@class NSString, UILabel, UIActivityIndicatorView;
@protocol SiriUITemplateView, SiriUIActivityIndicatorTemplateModel, SiriUITemplatedView;


#import "SiriUIBaseTemplateView.h"

@interface SiriUIActivityIndicatorTemplateView : SiriUIBaseTemplateView <SiriUITemplateView>



@property (weak, nonatomic) NSObject<SiriUIActivityIndicatorTemplateModel> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UILabel *detailTextLabel; // ivar: _detailTextLabel
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIActivityIndicatorView *spinnerView; // ivar: _spinnerView
@property (readonly) Class superclass;
@property (weak, nonatomic) NSObject<SiriUITemplatedView> *templatedSuperview;


-(CGFloat)desiredHeight;
-(id)initWithDataSource:(id)arg0 ;
-(void)layoutSubviews;
-(void)reloadData;


@end


#endif