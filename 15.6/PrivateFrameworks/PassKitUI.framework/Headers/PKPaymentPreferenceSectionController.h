// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPAYMENTPREFERENCESECTIONCONTROLLER_H
#define PKPAYMENTPREFERENCESECTIONCONTROLLER_H

@class UICollectionViewCellRegistration, NSString, NSMutableArray, PKPaymentPreference;
@protocol PKTextFieldCollectionViewListCellDelegate, PKPaymentPreferenceSectionControllerDelegate;


#import "PKDynamicListSectionController.h"

@interface PKPaymentPreferenceSectionController : PKDynamicListSectionController <PKTextFieldCollectionViewListCellDelegate>

 {
    NSUInteger _editingRow;
    UICollectionViewCellRegistration *_listRegistration;
    UICollectionViewCellRegistration *_textFieldRegistration;
    BOOL _isEditingFieldThatWasOriginallyInvalid;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKPaymentPreferenceSectionControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) id *handler; // ivar: _handler
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableArray *items; // ivar: _items
@property (readonly, nonatomic) PKPaymentPreference *preference; // ivar: _preference
@property (readonly, nonatomic) NSInteger style; // ivar: _style
@property (readonly) Class superclass;


-(BOOL)_showErrorForTextField:(id)arg0 ;
-(BOOL)editedTextFieldHasError:(id)arg0 ;
-(BOOL)textFieldShouldReturn:(id)arg0 forListCell:(id)arg1 ;
-(id)addPreferenceItems;
-(id)appendNewItemForEditing;
-(id)appendNewSubPreference;
-(id)cellRegistrationForItem:(id)arg0 ;
-(id)initWithPreference:(id)arg0 style:(NSInteger)arg1 preferencesChangedHandler:(id)arg2 ;
-(id)newOptionItemForSubPreference:(id)arg0 ;
-(id)newOptionItemForSubPreference:(id)arg0 hasErrorHandler:(id)arg1 ;
-(id)sectionIdentifier;
-(id)snapshotWithPreviousSnapshot:(id)arg0 forSectionIdentifier:(id)arg1 ;
-(void)deleteItem:(id)arg0 forRow:(NSUInteger)arg1 ;
-(void)didSelectItem:(id)arg0 ;
-(void)editItem:(id)arg0 forRow:(NSUInteger)arg1 ;
-(void)setSelectedIndex:(NSUInteger)arg0 ;
-(void)textFieldDidBeginEditing:(id)arg0 forListCell:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg0 forListCell:(id)arg1 ;


@end


#endif