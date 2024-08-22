// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXSETTINGSPRIMARYRESOURCEDOWNLOADCONTROLLER_H
#define AXSETTINGSPRIMARYRESOURCEDOWNLOADCONTROLLER_H

@class NSString, NSLock, UISlider, AXLangMap, UIView, UIActivityIndicatorView, NSMutableArray;
@protocol OS_dispatch_queue;


#import "AXSettingsResourceDownloadController.h"

@interface AXSettingsPrimaryResourceDownloadController : AXSettingsResourceDownloadController {
    BOOL _showSpeakingRate;
    BOOL _receivedCompactAnswer;
    NSInteger _storageSize;
    BOOL _isDownloading;
    BOOL _wantsDownload;
    BOOL _wantsDelete;
    BOOL _receivedIsDownloading;
    NSString *_languageBeingDownloaded;
    NSObject<OS_dispatch_queue> *_loadVoiceFootprintsQueue;
    NSLock *_voiceFootprintLock;
    BOOL _loadingVoiceFootprints;
    UISlider *_speechRateSlider;
}


@property (copy, nonatomic) id *getSpeakingRateCallback; // ivar: _getSpeakingRateCallback
@property (nonatomic) BOOL hideLanguageInDialect; // ivar: _hideLanguageInDialect
@property (retain, nonatomic) NSString *language; // ivar: _language
@property (retain, nonatomic) AXLangMap *languageMap; // ivar: _languageMap
@property (retain, nonatomic) UIView *loadingView; // ivar: _loadingView
@property (retain, nonatomic) UIActivityIndicatorView *progressIndicator; // ivar: _progressIndicator
@property (copy, nonatomic) id *setSpeakingRateCallback; // ivar: _setSpeakingRateCallback
@property (nonatomic) BOOL showDialectInTitle; // ivar: _showDialectInTitle
@property (nonatomic) BOOL showDialectPicker; // ivar: _showDialectPicker
@property (nonatomic) BOOL showNeural; // ivar: _showNeural
@property (nonatomic) BOOL showSpeakingRate;
@property (nonatomic) float speakingRate; // ivar: _speakingRate
@property (retain, nonatomic) Class speakingRateSliderCell; // ivar: _speakingRateSliderCell
@property (retain, nonatomic) NSMutableArray *voiceFootprints; // ivar: _voiceFootprints


-(CGFloat)tableView:(id)arg0 estimatedHeightForRowAtIndexPath:(id)arg1 ;
-(id)_getSelectedVariation:(id)arg0 ;
-(id)_internalSpecifiers;
-(id)_speakingRate:(id)arg0 ;
-(id)init;
-(id)specifiers;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)_prepareVoiceFootprints;
-(void)_updateSpeakingRate;
-(void)addVoiceFootprintsToArray:(id)arg0 forDialect:(id)arg1 ;
-(void)createVoiceFootprints;
-(void)setEditing:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg0 willDisplayHeaderView:(id)arg1 forSection:(NSInteger)arg2 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif