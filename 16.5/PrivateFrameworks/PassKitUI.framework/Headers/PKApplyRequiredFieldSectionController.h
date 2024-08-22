// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKAPPLYREQUIREDFIELDSECTIONCONTROLLER_H
#define PKAPPLYREQUIREDFIELDSECTIONCONTROLLER_H

@class PKPaymentSetupField, NSArray, NSString;
@protocol PKTextFieldCollectionViewListCellDelegate;


#import "PKApplyCollectionViewSectionController.h"

@interface PKApplyRequiredFieldSectionController : PKApplyCollectionViewSectionController <PKTextFieldCollectionViewListCellDelegate>

 {
    PKPaymentSetupField *_field;
    NSArray *_items;
}


@property (nonatomic) NSObject<PKTextFieldCollectionViewListCellDelegate> *cellDelegate; // ivar: _cellDelegate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)textFieldShouldReturn:(id)arg0 forListCell:(id)arg1 ;
-(id)headerAttributedStringForIdentifier:(id)arg0 ;
-(id)identifiers;
-(id)initWithController:(id)arg0 applyPage:(id)arg1 field:(id)arg2 ;
-(id)layoutWithLayoutEnvironment:(id)arg0 sectionIdentifier:(id)arg1 ;
-(id)snapshotWithPreviousSnapshot:(id)arg0 forSectionIdentifier:(id)arg1 ;
-(void)didSelectItem:(id)arg0 ;
-(void)textFieldDidChangeSelection:(id)arg0 forListCell:(id)arg1 ;


@end


#endif