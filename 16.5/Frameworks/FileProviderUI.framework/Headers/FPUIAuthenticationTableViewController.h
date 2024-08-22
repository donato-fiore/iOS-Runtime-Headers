// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FPUIAUTHENTICATIONTABLEVIEWCONTROLLER_H
#define FPUIAUTHENTICATIONTABLEVIEWCONTROLLER_H

@class UITableViewController, NSString, NSDictionary, NSArray;
@protocol FPUIAuthenticationConnectionFlowDelegate, FPUIAuthenticationDelegate;



@interface FPUIAuthenticationTableViewController : UITableViewController <FPUIAuthenticationConnectionFlowDelegate>

 {
    NSUInteger _state;
}


@property (weak, nonatomic) NSObject<FPUIAuthenticationDelegate> *authenticationDelegate; // ivar: _authenticationDelegate
@property (nonatomic) BOOL canTransitionToNextStep;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSDictionary *rowDescriptors; // ivar: _rowDescriptors
@property (copy, nonatomic) NSArray *sectionDescriptors; // ivar: _sectionDescriptors
@property (readonly) Class superclass;
@property (nonatomic, getter=isTransitioning) BOOL transitioning;


+(id)defaultTitle;
-(BOOL)tableView:(id)arg0 shouldHighlightRowAtIndexPath:(id)arg1 ;
-(CGFloat)tableView:(id)arg0 estimatedHeightForRowAtIndexPath:(id)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForFooterInSection:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForHeaderInSection:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_rowDescriptorForIndexPath:(id)arg0 ;
-(id)_rowDescriptorsForSection:(NSInteger)arg0 ;
-(id)_tableView:(id)arg0 viewOfType:(NSUInteger)arg1 inSection:(NSInteger)arg2 ;
-(id)_titleView;
-(id)defaultLeftBarButtonItem;
-(id)defaultRightBarButtonItem;
-(id)init;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 viewForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 viewForHeaderInSection:(NSInteger)arg1 ;
-(void)_cancel:(id)arg0 ;
-(void)_setState:(NSUInteger)arg0 ;
-(void)_stateDidChange;
-(void)authenticationDelegate:(id)arg0 didEncounterError:(id)arg1 ;
-(void)authenticationDelegate:(id)arg0 didFinishWithError:(id)arg1 completionHandler:(id)arg2 ;
-(void)authenticationDelegate:(id)arg0 didReceiveCredentialDescriptors:(id)arg1 ;
-(void)authenticationDelegate:(id)arg0 didReceiveVolumeMountRepresentations:(id)arg1 ;
-(void)setNavBarActivityIndicatorHidden:(BOOL)arg0 ;
-(void)setTitle:(id)arg0 ;
-(void)setupTableViewSections;
-(void)tableView:(id)arg0 accessoryButtonTappedForRowWithIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)viewDidLoad;


@end


#endif