// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SIRIUIPROFILETEMPLATEVIEW_H
#define SIRIUIPROFILETEMPLATEVIEW_H

@class NSString, UIImageView;
@protocol SiriUITemplateView, SiriUIProfileTemplateModel, SiriUITemplatedView;


#import "SiriUILabelStackTemplateView.h"

@interface SiriUIProfileTemplateView : SiriUILabelStackTemplateView <SiriUITemplateView>



@property (weak, nonatomic) NSObject<SiriUIProfileTemplateModel> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (readonly) Class superclass;
@property (weak, nonatomic) NSObject<SiriUITemplatedView> *templatedSuperview;


-(NSInteger)layoutStyle;
-(id)initWithDataSource:(id)arg0 ;
-(void)layoutImage;
-(void)reloadData;


@end


#endif