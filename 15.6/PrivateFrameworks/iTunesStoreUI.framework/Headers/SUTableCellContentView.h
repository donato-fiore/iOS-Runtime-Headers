// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SUTABLECELLCONTENTVIEW_H
#define SUTABLECELLCONTENTVIEW_H

@class UIView, UIBezierPath, NSMutableArray, NSString;
@protocol SUCellConfigurationView;


#import "SUCellConfiguration.h"

@interface SUTableCellContentView : UIView <SUCellConfigurationView>

 {
    UIBezierPath *_clipPath;
    BOOL _drawAsDisabled;
    BOOL _highlighted;
    BOOL _highlightsOnlyContentView;
    UIView *_overlayView;
    NSMutableArray *_subviews;
    BOOL _useSubviewLayout;
}


@property (nonatomic) int clipCorners; // ivar: _clipCorners
@property (retain, nonatomic) SUCellConfiguration *configuration; // ivar: _configuration
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, getter=isDeleteConfirmationVisible) BOOL deleteConfirmationVisisble;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL drawAsDisabled;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (nonatomic) BOOL highlightsOnlyContentView;
@property (readonly) Class superclass;
@property (nonatomic) BOOL usesSubviews;


-(id)_clipPath;
-(id)_clippedImageForImage:(id)arg0 ;
-(void)_reloadSubviewAlphasAnimated:(BOOL)arg0 ;
-(void)_reloadSubviewsForConfiguration;
-(void)_removeSubviewsForConfiguration;
-(void)_startUsingSubviewLayout;
-(void)_stopUsingSubviewLayout;
-(void)_updateDisabledStyleForSubviews;
-(void)dealloc;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)reloadView;
-(void)setFrame:(struct CGRect )arg0 ;


@end


#endif