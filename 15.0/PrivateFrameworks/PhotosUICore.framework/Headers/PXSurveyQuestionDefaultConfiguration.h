// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXSURVEYQUESTIONDEFAULTCONFIGURATION_H
#define PXSURVEYQUESTIONDEFAULTCONFIGURATION_H

@class UIView, UIImage, NSString;
@protocol PXSurveyQuestionConfiguration;

#import <Foundation/Foundation.h>

#import "PXSurveyQuestionConfigurationHandlers.h"

@interface PXSurveyQuestionDefaultConfiguration : NSObject <PXSurveyQuestionConfiguration>

 {
    UIView *_placeholderView;
}


@property (readonly, nonatomic) UIImage *contentImageForOneUp;
@property (readonly, nonatomic) CGRect contentRectForOneUp;
@property (readonly, nonatomic) UIView *contentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) PXSurveyQuestionConfigurationHandlers *handlers; // ivar: _handlers
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *title; // ivar: _title


-(id)init;
-(id)initWithTitle:(id)arg0 ;
-(void)layoutContentViewInRect:(struct CGRect )arg0 ;


@end


#endif