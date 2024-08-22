// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPASSDETAILSECTIONDRILLINVIEWCONTROLLER_H
#define PKPASSDETAILSECTIONDRILLINVIEWCONTROLLER_H

@class NSString;
@protocol PKConfigurablePassDetailSectionsControllerDelegate;


#import "PKDynamicTableViewController.h"
#import "PKConfigurablePassDetailSectionsController.h"

@interface PKPassDetailSectionDrillInViewController : PKDynamicTableViewController <PKConfigurablePassDetailSectionsControllerDelegate>

 {
    PKConfigurablePassDetailSectionsController *_sectionController;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithPass:(id)arg0 field:(id)arg1 useBridgeStyle:(BOOL)arg2 isShowingSecureInformation:(BOOL)arg3 ;
-(void)applicationDidBecomeActive:(id)arg0 ;
-(void)applicationWillResignActive:(id)arg0 ;
-(void)presentAuthRequestForPolicy:(NSInteger)arg0 completion:(id)arg1 ;
-(void)presentPassDetailDrillInForField:(id)arg0 ;
-(void)reloadSectionIdentifiers:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif