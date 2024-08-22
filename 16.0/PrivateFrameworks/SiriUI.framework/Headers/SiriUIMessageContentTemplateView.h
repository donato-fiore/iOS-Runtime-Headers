// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIRIUIMESSAGECONTENTTEMPLATEVIEW_H
#define SIRIUIMESSAGECONTENTTEMPLATEVIEW_H

@protocol SiriUIMessageContentTemplateModel;


#import "SiriUIBaseTemplateView.h"

@interface SiriUIMessageContentTemplateView : SiriUIBaseTemplateView {
    id *_textBalloonView;
}


@property (weak, nonatomic) NSObject<SiriUIMessageContentTemplateModel> *dataSource;


-(CGFloat)desiredHeight;
-(id)initWithDataSource:(id)arg0 ;
-(struct CGSize )_textBalloonViewBoundingSize;
-(void)layoutSubviews;
-(void)reloadData;
-(void)setSemanticContentAttribute:(NSInteger)arg0 ;


@end


#endif