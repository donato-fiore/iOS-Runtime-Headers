// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIREFERENCELIBRARYVIEWCONTROLLER_H
#define UIREFERENCELIBRARYVIEWCONTROLLER_H

@class NSString, NSArray;
@protocol UITableViewDataSource, UITableViewDelegate, UINavigationControllerDelegate;


#import "UIViewController.h"
#import "UINavigationController.h"
#import "UITableViewController.h"

@interface UIReferenceLibraryViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UINavigationControllerDelegate>

 {
    NSString *_term;
    NSArray *_definitionValues;
    UINavigationController *_baseNavController;
    UITableViewController *_multiDefViewController;
    UIViewController *_longDefViewController;
    NSInteger _oldPopoverStyle;
    BOOL _enableRotation;
    BOOL _previousIgnoreOrientation;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *dismissCompletionHandler; // ivar: _dismissCompletionHandler
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)_shouldShowDefineForTerm:(id)arg0 ;
+(BOOL)_shouldShowDefineForTermOfLength:(NSInteger)arg0 ;
+(BOOL)dictionaryHasDefinitionForTerm:(id)arg0 ;
+(id)_backgroundColor;
+(id)_colorAttributes;
+(id)_defaultButtonImage;
+(id)_dictionaryDefinitionAttributes;
+(id)_diddlyDoViewLineColor;
+(id)_foregroundColor;
+(id)_localizedDictionaryTitleAttributes;
+(id)_pressedButtonImage;
-(BOOL)enableRotation;
-(BOOL)shouldAutorotate;
-(BOOL)shouldAutorotateToInterfaceOrientation:(NSInteger)arg0 ;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)_preferredInterfaceOrientationGivenCurrentOrientation:(NSInteger)arg0 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(NSUInteger)supportedInterfaceOrientations;
-(id)_backgroundColor;
-(id)_colorAttributes;
-(id)_defaultButtonImage;
-(id)_dictionaryDefinitionAttributes;
-(id)_diddlyDoViewLineColor;
-(id)_foregroundColor;
-(id)_localizedDictionaryTitleAttributes;
-(id)_pressedButtonImage;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithTerm:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 willSelectRowAtIndexPath:(id)arg1 ;
-(void)_didResignContentViewControllerOfPopover:(id)arg0 ;
-(void)_dismissModalReferenceView:(id)arg0 ;
-(void)_installDoneButtonOnViewControllerIfNeeded:(id)arg0 ;
-(void)_installRequiredElementsOnViewController:(id)arg0 ;
-(void)_searchWeb:(id)arg0 ;
-(void)_setPopoverController:(id)arg0 ;
-(void)_willBecomeContentViewControllerOfPopover:(id)arg0 ;
-(void)navigationController:(id)arg0 willShowViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)pushDownloadManager:(id)arg0 ;
-(void)setEnableRotation:(BOOL)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)window:(id)arg0 setupWithInterfaceOrientation:(NSInteger)arg1 ;


@end


#endif