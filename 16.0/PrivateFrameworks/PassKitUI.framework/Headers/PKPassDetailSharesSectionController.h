// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPASSDETAILSHARESSECTIONCONTROLLER_H
#define PKPASSDETAILSHARESSECTIONCONTROLLER_H

@class NSArray, NSString, PKSharedPassSharesController;
@protocol PKSharedPassSharesControllerDelegate, PKPaymentPassDetailTableViewSectionController, PKPassDetailSharesSectionControllerDelegate;

#import <Foundation/Foundation.h>


@interface PKPassDetailSharesSectionController : NSObject <PKSharedPassSharesControllerDelegate, PKPaymentPassDetailTableViewSectionController>

 {
    NSInteger _style;
    BOOL _hasLoadedInitialData;
}


@property (retain, nonatomic) NSArray *allSectionIdentifiers; // ivar: _allSectionIdentifiers
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKPassDetailSharesSectionControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *sectionIdentifiers; // ivar: _sectionIdentifiers
@property (readonly, nonatomic) PKSharedPassSharesController *sharesController; // ivar: _sharesController
@property (readonly) Class superclass;


+(BOOL)validForPaymentPass:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSectionIdentifier:(id)arg1 ;
-(id)_entitlementsCellForTtableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)_infoCellWithText:(id)arg0 forTableView:(id)arg1 ;
-(id)init;
-(id)initWithSharesController:(id)arg0 style:(NSInteger)arg1 delegate:(id)arg2 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 sectionIdentifier:(id)arg2 ;
-(void)_updateSectionIdentifiersNotify:(BOOL)arg0 ;
-(void)dealloc;
-(void)loadShareDataWithCompletion:(id)arg0 ;
-(void)sharedPassSharesControllerDidUpdateShares:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 sectionIdentifier:(id)arg2 ;


@end


#endif