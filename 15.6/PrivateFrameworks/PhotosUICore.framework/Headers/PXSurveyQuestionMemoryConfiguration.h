// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXSURVEYQUESTIONMEMORYCONFIGURATION_H
#define PXSURVEYQUESTIONMEMORYCONFIGURATION_H

@class NSString, PHPhotoLibrary, UIImage, UIView, PHMemory;
@protocol PXMemoryViewPresentationDelegate, PXSurveyQuestionConfiguration;

#import <Foundation/Foundation.h>

#import "PXMemoryView.h"
#import "PXSurveyQuestionConfigurationHandlers.h"

@interface PXSurveyQuestionMemoryConfiguration : NSObject <PXMemoryViewPresentationDelegate, PXSurveyQuestionConfiguration>

 {
    PXMemoryView *_memoryView;
    NSString *_customKeyAssetIdentifier;
    PHPhotoLibrary *_photoLibrary;
}


@property (readonly, nonatomic) UIImage *contentImageForOneUp;
@property (readonly, nonatomic) CGRect contentRectForOneUp;
@property (readonly, nonatomic) UIView *contentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) PXSurveyQuestionConfigurationHandlers *handlers; // ivar: _handlers
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PHMemory *memory; // ivar: _memory
@property (readonly, nonatomic) NSString *songAdamId; // ivar: _songAdamId
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *title; // ivar: _title


-(id)init;
-(id)initWithTitle:(id)arg0 memory:(id)arg1 songAdamId:(id)arg2 customKeyAssetIdentifier:(id)arg3 ;
-(void)layoutContentViewInRect:(struct CGRect )arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)presentDetailsForMemoryView:(id)arg0 ;


@end


#endif