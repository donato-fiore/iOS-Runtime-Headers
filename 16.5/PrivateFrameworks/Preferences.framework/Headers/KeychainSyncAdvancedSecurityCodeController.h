// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef KEYCHAINSYNCADVANCEDSECURITYCODECONTROLLER_H
#define KEYCHAINSYNCADVANCEDSECURITYCODECONTROLLER_H

@class UIFont, NSString;
@protocol UIAlertViewDelegate;


#import "PSKeychainSyncViewController.h"

@interface KeychainSyncAdvancedSecurityCodeController : PSKeychainSyncViewController <UIAlertViewDelegate>

 {
    CGFloat _cellTextWidth;
    UIFont *_cellFont;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL showsDisableRecoveryOption; // ivar: _showsDisableRecoveryOption
@property (readonly) Class superclass;


-(BOOL)tableView:(id)arg0 shouldDrawTopSeparatorForSection:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(id)specifiers;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)_finishedWithSpecifier:(id)arg0 ;
-(void)nextPressed;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif