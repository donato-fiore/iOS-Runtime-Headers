// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXSETTINGSVOICETABLEVIEWCELL_H
#define AXSETTINGSVOICETABLEVIEWCELL_H

@class PSTableCell, SKUIItemOfferButton, UILabel, NSString, UIImageView;
@protocol SKUIItemOfferButtonDelegate, AXResourceDownloadInformationDelegate;



@interface AXSettingsVoiceTableViewCell : PSTableCell <SKUIItemOfferButtonDelegate>

 {
    SKUIItemOfferButton *_downloadButton;
    SKUIItemOfferButton *_sampleButton;
    UILabel *_infoLabel;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL indentsForVoiceGraphic; // ivar: _indentsForVoiceGraphic
@property (weak, nonatomic) NSObject<AXResourceDownloadInformationDelegate> *infoDelegate; // ivar: _infoDelegate
@property (nonatomic) BOOL showsInfoLabel; // ivar: _showsInfoLabel
@property (nonatomic) BOOL showsPlayButton; // ivar: _showsPlayButton
@property (nonatomic) BOOL showsUsageInfo; // ivar: _showsUsageInfo
@property (retain, nonatomic) UIImageView *siriImageView; // ivar: _siriImageView
@property (readonly) Class superclass;


-(BOOL)_axDownload;
-(BOOL)accessibilityActivate;
-(BOOL)isAccessibilityElement;
-(NSUInteger)accessibilityTraits;
-(id)accessibilityCustomActions;
-(id)accessibilityLabel;
-(id)accessibilityValue;
-(id)colorFromHexString:(id)arg0 alpha:(float)arg1 ;
-(id)infoLabel;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 specifier:(id)arg2 ;
-(id)resources;
-(void)_axPlaySample;
-(void)_axShowCloudImageFor:(id)arg0 ;
-(void)_updateInfoLabelText;
-(void)itemOfferButtonDidAnimateTransition:(id)arg0 ;
-(void)layoutSubviews;
-(void)refreshCellContentsWithSpecifier:(id)arg0 ;
-(void)updateInformation;


@end


#endif