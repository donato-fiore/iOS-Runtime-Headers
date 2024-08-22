// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXSURVEYQUESTIONPERSONCONFIGURATION_H
#define PXSURVEYQUESTIONPERSONCONFIGURATION_H

@class UIImage, UIView, NSString, PHPerson;
@protocol PXSurveyQuestionConfiguration;

#import <Foundation/Foundation.h>

#import "PXPeopleScalableAvatarView.h"
#import "PXSurveyQuestionConfigurationHandlers.h"

@interface PXSurveyQuestionPersonConfiguration : NSObject <PXSurveyQuestionConfiguration>

 {
    PXPeopleScalableAvatarView *_avatarView;
}


@property (readonly, nonatomic) UIImage *contentImageForOneUp;
@property (readonly, nonatomic) CGRect contentRectForOneUp;
@property (readonly, nonatomic) UIView *contentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) PXSurveyQuestionConfigurationHandlers *handlers; // ivar: _handlers
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PHPerson *person; // ivar: _person
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *title; // ivar: _title


-(id)init;
-(id)initWithTitle:(id)arg0 person:(id)arg1 ;
-(void)layoutContentViewInRect:(struct CGRect )arg0 ;


@end


#endif