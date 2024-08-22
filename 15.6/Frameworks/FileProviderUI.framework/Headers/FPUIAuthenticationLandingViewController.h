// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FPUIAUTHENTICATIONLANDINGVIEWCONTROLLER_H
#define FPUIAUTHENTICATIONLANDINGVIEWCONTROLLER_H

@class NSMutableArray, UITextField, NSURL, NSArray, NSString;
@protocol UITextFieldDelegate, FPUIAuthenticationServerInfoDelegate;


#import "FPUIAuthenticationTableViewController.h"
#import "FPUIAuthenticationSectionDescriptor.h"

@interface FPUIAuthenticationLandingViewController : FPUIAuthenticationTableViewController <UITextFieldDelegate, FPUIAuthenticationServerInfoDelegate>

 {
    FPUIAuthenticationSectionDescriptor *_recentServersSection;
    FPUIAuthenticationSectionDescriptor *_recentServersExtraTopPaddingSection;
    NSMutableArray *_recentServersRowDescriptors;
    UITextField *_serverInputTextField;
    NSURL *_initialURL;
    NSURL *_sanitizedURL;
    NSURL *_initialUsername;
    NSArray *_recentServers;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSURL *initialConnectionURL; // ivar: _initialConnectionURL
@property (readonly) Class superclass;


-(BOOL)_canMoveToNextStep;
-(BOOL)textFieldShouldReturn:(id)arg0 ;
-(id)defaultRightBarButtonItem;
-(id)initWithURL:(id)arg0 ;
-(void)_connect:(id)arg0 ;
-(void)_connectToServer:(id)arg0 ;
-(void)_disectURLToComponents:(id)arg0 ;
-(void)_showRecentServersSectionWithRecentServers:(id)arg0 rowAnimation:(NSInteger)arg1 ;
-(void)_transitionUIStateToConnecting;
-(void)_updateNextStep;
-(void)_updateRecentServerSectionVisibilityWithRowAnimation:(NSInteger)arg0 forceReload:(BOOL)arg1 ;
-(void)authenticationDelegate:(id)arg0 didEncounterError:(id)arg1 ;
-(void)removeServerWithRepresentation:(id)arg0 ;
-(void)setupTableViewSections;
-(void)textFieldDidChange:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif