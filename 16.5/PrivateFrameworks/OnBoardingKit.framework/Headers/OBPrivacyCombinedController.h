// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OBPRIVACYCOMBINEDCONTROLLER_H
#define OBPRIVACYCOMBINEDCONTROLLER_H

@class UIColor, NSString;


#import "OBTableWelcomeController.h"

@interface OBPrivacyCombinedController : OBTableWelcomeController

@property BOOL allowsOpeningSafari; // ivar: _allowsOpeningSafari
@property (retain, nonatomic) UIColor *customTintColor; // ivar: _customTintColor
@property (retain) NSString *displayLanguage; // ivar: _displayLanguage
@property BOOL presentedFromPrivacyPane; // ivar: _presentedFromPrivacyPane
@property (nonatomic) BOOL underlineLinks; // ivar: _underlineLinks


+(id)new;
+(void)presentPrivacyCombinedControllerOverController:(id)arg0 dismissHandler:(id)arg1 ;
-(id)init;
-(id)initWithBundles:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;


@end


#endif