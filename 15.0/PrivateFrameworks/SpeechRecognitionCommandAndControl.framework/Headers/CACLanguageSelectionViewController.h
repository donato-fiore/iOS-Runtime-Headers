// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CACLANGUAGESELECTIONVIEWCONTROLLER_H
#define CACLANGUAGESELECTIONVIEWCONTROLLER_H

@class UIViewController, NSArray, NSString, CACUILanguageViewBridgeController;
@protocol CACLanguageViewBridgeDelegate;



@interface CACLanguageSelectionViewController : UIViewController <CACLanguageViewBridgeDelegate>



@property (retain, nonatomic) NSArray *availableLocales; // ivar: _availableLocales
@property (nonatomic) NSUInteger controllerStyle; // ivar: _controllerStyle
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CACUILanguageViewBridgeController *languageViewBridgeController; // ivar: _languageViewBridgeController
@property (retain, nonatomic) UIViewController *languageViewController; // ivar: _languageViewController
@property (readonly) Class superclass;


+(id)defaultControllerWithStyle:(NSUInteger)arg0 ;
-(id)init;
-(void)cacLanguageDownloadStartDownload:(id)arg0 ;
-(void)cacLanguageDownloadStopDownload:(id)arg0 ;
-(void)dealloc;
-(void)dismiss;
-(void)handleDownloadProgressChange;
-(void)handleErrorOccured:(id)arg0 ;
-(void)languageDidChange;
-(void)selectedLanguageWithIdentifier:(id)arg0 ;
-(void)updateDownloadProgress;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif