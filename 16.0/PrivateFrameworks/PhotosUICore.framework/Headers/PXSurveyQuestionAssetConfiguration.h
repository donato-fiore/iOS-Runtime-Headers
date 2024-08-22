// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSURVEYQUESTIONASSETCONFIGURATION_H
#define PXSURVEYQUESTIONASSETCONFIGURATION_H

@class UIImage, UIView, NSString;
@protocol PXSurveyQuestionConfiguration, PXDisplayAsset;

#import <Foundation/Foundation.h>

#import "PXDisplayAssetContentView.h"
#import "PXSurveyQuestionConfigurationHandlers.h"

@interface PXSurveyQuestionAssetConfiguration : NSObject <PXSurveyQuestionConfiguration>

 {
    PXDisplayAssetContentView *_assetView;
}


@property (readonly, nonatomic) NSObject<PXDisplayAsset> *asset; // ivar: _asset
@property (readonly, nonatomic) CGRect assetContentsRect; // ivar: _assetContentsRect
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


+(void)configureViewForAsset:(id)arg0 ;
-(BOOL)needsQuestionInvalidationForChange:(id)arg0 ;
-(id)init;
-(id)initWithTitle:(id)arg0 asset:(id)arg1 ;
-(void)_handleDidSelectAssetView;
-(void)dealloc;
-(void)layoutContentViewInRect:(struct CGRect )arg0 ;


@end


#endif