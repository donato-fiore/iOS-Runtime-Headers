// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKIDENTITYDOCUMENTDETAILSVIEWCONTROLLER_H
#define PKIDENTITYDOCUMENTDETAILSVIEWCONTROLLER_H

@class PKSecureElementPass, NSArray, NSString;
@protocol PKViewControllerPreflightable, PKPaymentDataProvider;


#import "PKSectionTableViewController.h"

@interface PKIdentityDocumentDetailsViewController : PKSectionTableViewController <PKViewControllerPreflightable>

 {
    NSInteger _detailViewStyle;
    PKSecureElementPass *_pass;
    NSArray *_portraitElements;
    NSArray *_criticalElements;
    NSArray *_personalElements;
    NSArray *_additionalElements;
    NSArray *_idInfoElements;
    NSArray *_drivingPrivilegesElements;
    id<PKPaymentDataProvider> *_dataProvider;
    BOOL _inBridge;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)shouldMapSection:(NSUInteger)arg0 ;
-(BOOL)tableView:(id)arg0 shouldHighlightRowAtIndexPath:(id)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_elementAtIndexPath:(id)arg0 ;
-(id)_elementsForSection:(NSUInteger)arg0 ;
-(id)initWithPass:(id)arg0 dataProvider:(id)arg1 detailViewStyle:(NSInteger)arg2 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(void)_formatDataElements:(id)arg0 withCompletion:(id)arg1 ;
-(void)preflightWithCompletion:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif