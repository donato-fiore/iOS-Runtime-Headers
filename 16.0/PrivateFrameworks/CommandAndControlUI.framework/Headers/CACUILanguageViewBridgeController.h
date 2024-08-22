// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CACUILANGUAGEVIEWBRIDGECONTROLLER_H
#define CACUILANGUAGEVIEWBRIDGECONTROLLER_H

@class NSDictionary, UIViewController;
@protocol _TtP19CommandAndControlUI23CACLanguageViewDelegate_, CACLanguageViewBridgeDelegate;

#import <Foundation/Foundation.h>

#import "_TtC19CommandAndControlUI21CACLanguageViewBridge.h"

@interface CACUILanguageViewBridgeController : NSObject <_TtP19CommandAndControlUI23CACLanguageViewDelegate_>



@property (weak, nonatomic) NSObject<CACLanguageViewBridgeDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSDictionary *installationStatus; // ivar: _installationStatus
@property (retain, nonatomic) UIViewController *trueViewController; // ivar: _trueViewController
@property (retain, nonatomic) _TtC19CommandAndControlUI21CACLanguageViewBridge *viewBridge; // ivar: _viewBridge


-(id)createLanguageViewController;
-(id)createLanguageViewControllerWithLocales:(id)arg0 ;
-(id)init;
-(void)cancelDownloadWithIdentifier:(id)arg0 ;
-(void)downloadLanguageWithIdentifier:(id)arg0 ;
-(void)selectedLanguageWithIdentifier:(id)arg0 ;
-(void)setSelectedLanguageIdentifier:(id)arg0 ;
-(void)updateDownloadStatus:(id)arg0 ;
-(void)updateInstallationStatus:(id)arg0 ;


@end


#endif