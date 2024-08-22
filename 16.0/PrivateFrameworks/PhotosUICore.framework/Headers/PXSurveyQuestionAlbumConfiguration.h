// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSURVEYQUESTIONALBUMCONFIGURATION_H
#define PXSURVEYQUESTIONALBUMCONFIGURATION_H

@class PHAssetCollection, UIImage, UIView, NSString, PHAsset;
@protocol PXSurveyQuestionConfiguration;

#import <Foundation/Foundation.h>

#import "PXDisplayAssetContentView.h"
#import "PXTitleSubtitleUILabel.h"
#import "PXSurveyQuestionConfigurationHandlers.h"

@interface PXSurveyQuestionAlbumConfiguration : NSObject <PXSurveyQuestionConfiguration>

 {
    PXDisplayAssetContentView *_contentView;
    PXTitleSubtitleUILabel *_label;
}


@property (readonly, nonatomic) PHAssetCollection *album; // ivar: _album
@property (readonly, nonatomic) UIImage *contentImageForOneUp;
@property (readonly, nonatomic) CGRect contentRectForOneUp;
@property (readonly, nonatomic) UIView *contentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) PXSurveyQuestionConfigurationHandlers *handlers; // ivar: _handlers
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isStale; // ivar: _isStale
@property (readonly, nonatomic) PHAsset *keyAsset; // ivar: _keyAsset
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *title; // ivar: _title


-(BOOL)needsDisplayRefreshForChange:(id)arg0 ;
-(BOOL)needsQuestionInvalidationForChange:(id)arg0 ;
-(id)init;
-(id)initWithTitle:(id)arg0 album:(id)arg1 ;
-(void)_handleDidSelectAlbumView;
-(void)dealloc;
-(void)layoutContentViewInRect:(struct CGRect )arg0 ;


@end


#endif