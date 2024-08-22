// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSURVEYQUESTIONASSETGROUPCONFIGURATION_H
#define PXSURVEYQUESTIONASSETGROUPCONFIGURATION_H

@class PHAssetCollection, UIImage, UIView, NSString;
@protocol PXSurveyQuestionConfiguration, PXSurveyQuestionAssetGroupViewDelegate;

#import <Foundation/Foundation.h>

#import "PXSurveyQuestionAssetGroupView.h"
#import "PXSurveyQuestionConfigurationHandlers.h"

@interface PXSurveyQuestionAssetGroupConfiguration : NSObject <PXSurveyQuestionConfiguration, PXSurveyQuestionAssetGroupViewDelegate>

 {
    PXSurveyQuestionAssetGroupView *_contentView;
}


@property (readonly, nonatomic) PHAssetCollection *assetCollection; // ivar: _assetCollection
@property (readonly, nonatomic) UIImage *contentImageForOneUp;
@property (readonly, nonatomic) CGRect contentRectForOneUp;
@property (readonly, nonatomic) UIView *contentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) PXSurveyQuestionConfigurationHandlers *handlers; // ivar: _handlers
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isStale; // ivar: _isStale
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *title; // ivar: _title


-(id)init;
-(id)initWithTitle:(id)arg0 assetCollection:(id)arg1 ;
-(void)layoutContentViewInRect:(struct CGRect )arg0 ;
-(void)px_surveyQuestionAssetGroupViewWasTapped:(id)arg0 ;


@end


#endif