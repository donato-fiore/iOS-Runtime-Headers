// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKOFFICIALAPPVIEW_H
#define MKOFFICIALAPPVIEW_H

@class UIImageView, UIView, UIButton, NSMutableArray, GEOAppleMediaServicesResult, UIImage;
@protocol MKOfficialAppViewDelegate;


#import "MKPlaceSectionRowView.h"
#import "_MKUILabel.h"

@interface MKOfficialAppView : MKPlaceSectionRowView {
    UIImageView *_storeAppImageView;
    UIView *_labelContainerView;
    _MKUILabel *_appNameLabel;
    _MKUILabel *_descriptionLabel;
    UIButton *_punchOutButton;
    NSMutableArray *_constraintArray;
    BOOL _layoutShouldStack;
}


@property (retain, nonatomic) GEOAppleMediaServicesResult *appStoreApp; // ivar: _appStoreApp
@property (weak, nonatomic) NSObject<MKOfficialAppViewDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (nonatomic) BOOL isAppInstalled; // ivar: _isAppInstalled


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_commonInit;
-(void)_contentSizeDidChangeNotificationHandler;
-(void)_createConstraints;
-(void)_punchOutButtonSelected:(id)arg0 ;
-(void)_updateFonts;
-(void)_updateLabelText;
-(void)_updateShouldLayoutStack;
-(void)infoCardThemeChanged;
-(void)updateButtonText;


@end


#endif