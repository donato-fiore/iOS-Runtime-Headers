// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPASSDETAILSHARESSECTIONCONTROLLER_H
#define PKPASSDETAILSHARESSECTIONCONTROLLER_H

@class NSString, PKSharedPassSharesController;
@protocol PKSharedPassSharesControllerDelegate, PKPassDetailSharesSectionControllerDelegate;


#import "PKPaymentPassDetailSectionController.h"

@interface PKPassDetailSharesSectionController : PKPaymentPassDetailSectionController <PKSharedPassSharesControllerDelegate>

 {
    BOOL _hasLoadedInitialData;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKPassDetailSharesSectionControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PKSharedPassSharesController *sharesController; // ivar: _sharesController
@property (readonly) Class superclass;


+(BOOL)validForPaymentPass:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSectionIdentifier:(id)arg1 ;
-(id)init;
-(id)initWithSharesController:(id)arg0 delegate:(id)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 sectionIdentifier:(id)arg2 ;
-(void)_updateSectionIdentifiersNotify:(BOOL)arg0 ;
-(void)dealloc;
-(void)preflight:(id)arg0 ;
-(void)sharedPassSharesControllerDidUpdateShares:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 sectionIdentifier:(id)arg2 ;


@end


#endif