// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSURVEYQUESTIONPERSONGROUPCONFIGURATION_H
#define PXSURVEYQUESTIONPERSONGROUPCONFIGURATION_H

@class UIView, UIImage, NSString, NSArray;
@protocol PXSurveyQuestionConfiguration;

#import <Foundation/Foundation.h>

#import "PXSurveyQuestionConfigurationHandlers.h"

@interface PXSurveyQuestionPersonGroupConfiguration : NSObject <PXSurveyQuestionConfiguration>

 {
    UIView *_personGroupContentView;
}


@property (readonly, nonatomic) UIImage *contentImageForOneUp;
@property (readonly, nonatomic) CGRect contentRectForOneUp;
@property (readonly, nonatomic) UIView *contentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) PXSurveyQuestionConfigurationHandlers *handlers; // ivar: _handlers
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isStale; // ivar: _isStale
@property (readonly, nonatomic) NSArray *personGroup; // ivar: _personGroup
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *title; // ivar: _title


-(BOOL)needsQuestionInvalidationForChange:(id)arg0 ;
-(id)contentViewForDisplayScale:(CGFloat)arg0 ;
-(id)init;
-(id)initWithTitle:(id)arg0 personGroup:(id)arg1 ;
-(void)layoutContentViewInRect:(struct CGRect )arg0 ;


@end


#endif