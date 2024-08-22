// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSURVEYQUESTIONWALLPAPERCONFIGURATION_H
#define PXSURVEYQUESTIONWALLPAPERCONFIGURATION_H

@class UIImage, UIView, NSString;
@protocol PXSurveyQuestionConfiguration, PXDisplayAsset;

#import <Foundation/Foundation.h>

#import "PXWallpaperSuggestionView.h"
#import "PXSurveyQuestionConfigurationHandlers.h"

@interface PXSurveyQuestionWallpaperConfiguration : NSObject <PXSurveyQuestionConfiguration>

 {
    PXWallpaperSuggestionView *_wallpaperView;
}


@property (readonly, nonatomic) NSObject<PXDisplayAsset> *asset; // ivar: _asset
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


-(BOOL)needsQuestionInvalidationForChange:(id)arg0 ;
-(id)init;
-(id)initWithTitle:(id)arg0 asset:(id)arg1 ;
-(void)layoutContentViewInRect:(struct CGRect )arg0 ;


@end


#endif