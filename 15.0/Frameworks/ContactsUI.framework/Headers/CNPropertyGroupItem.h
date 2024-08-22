// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNPROPERTYGROUPITEM_H
#define CNPROPERTYGROUPITEM_H

@class CNContact, CNContactProperty, CNContactStore, NSURL, NSString, NSArray, CNLabeledValue, CNMutableContact;
@protocol CNPropertyGroupItemDelegate;


#import "CNCardGroupItem.h"
#import "CNUIContactsEnvironment.h"
#import "CNCardPropertyGroup.h"

@interface CNPropertyGroupItem : CNCardGroupItem

@property (nonatomic) BOOL allowsEmail; // ivar: _allowsEmail
@property (nonatomic) BOOL allowsIMessage; // ivar: _allowsIMessage
@property (nonatomic) BOOL allowsPhone; // ivar: _allowsPhone
@property (nonatomic) BOOL allowsTTY; // ivar: _allowsTTY
@property (readonly, nonatomic) BOOL canRemove;
@property (retain, nonatomic) CNContact *contact; // ivar: _contact
@property (readonly, nonatomic) CNContactProperty *contactProperty;
@property (readonly, nonatomic) CNContactStore *contactStore; // ivar: _contactStore
@property (readonly, nonatomic) NSURL *defaultActionURL;
@property (weak, nonatomic) NSObject<CNPropertyGroupItemDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSString *displayLabel;
@property (readonly, nonatomic) NSString *displayValue;
@property (readonly, nonatomic) NSString *editingStringValue;
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly, nonatomic) CNUIContactsEnvironment *environment; // ivar: _environment
@property (readonly, weak, nonatomic) NSArray *extendedLabels;
@property (readonly, nonatomic, getter=isFavorite) BOOL favorite;
@property (readonly, weak, nonatomic) CNCardPropertyGroup *group; // ivar: _group
@property (retain, nonatomic) CNLabeledValue *labeledValue; // ivar: _labeledValue
@property (readonly, nonatomic) BOOL modified;
@property (readonly, nonatomic) CNMutableContact *mutableContact;
@property (readonly, nonatomic) id *normalizedValue;
@property (retain, nonatomic) CNLabeledValue *originalLabeledValue; // ivar: _originalLabeledValue
@property (readonly, nonatomic) NSString *placeholderString;
@property (nonatomic) NSUInteger policyFlags; // ivar: _policyFlags
@property (readonly, weak, nonatomic) NSArray *promotedExtendedLabels;
@property (retain, nonatomic) NSString *property; // ivar: _property
@property (readonly, nonatomic, getter=isReadonly) BOOL readonly;
@property (readonly, weak, nonatomic) NSArray *standardLabels;
@property (readonly, nonatomic, getter=isSuggested) BOOL suggested;
@property (readonly, nonatomic) BOOL supportsLabel;


+(Class)classForProperty:(id)arg0 ;
+(id)emptyValueForLabel:(id)arg0 ;
+(id)initialValueForLabel:(id)arg0 group:(id)arg1 ;
+(id)newPropertyGroupItemForProperty:(id)arg0 ;
+(id)propertyGroupItemWithLabel:(id)arg0 group:(id)arg1 contact:(id)arg2 ;
+(id)propertyGroupItemWithLabel:(id)arg0 group:(id)arg1 contact:(id)arg2 environment:(id)arg3 ;
+(id)propertyGroupItemWithLabeledValue:(id)arg0 group:(id)arg1 contact:(id)arg2 ;
+(id)propertyGroupItemWithLabeledValue:(id)arg0 group:(id)arg1 contact:(id)arg2 environment:(id)arg3 ;
+(void)deleteCoreRecentsEntriesMatchingProperty:(id)arg0 recentsManager:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEquivalentToItem:(id)arg0 ;
-(BOOL)isEquivalentToItem:(id)arg0 whenEditing:(BOOL)arg1 ;
-(BOOL)isFavoriteOfActionType:(id)arg0 bundleIdentifier:(id)arg1 ;
-(BOOL)isValidIdentifier:(id)arg0 ;
-(BOOL)isValidValue:(id)arg0 ;
-(BOOL)shouldCreateNewMeContactToSaveChangesTo;
-(id)bestLabel:(id)arg0 ;
-(id)bestValue:(id)arg0 ;
-(id)description;
-(id)displayStringForValue:(id)arg0 ;
-(id)init;
-(id)initWithGroup:(id)arg0 ;
-(id)initWithLabel:(id)arg0 group:(id)arg1 contact:(id)arg2 environment:(id)arg3 ;
-(id)initWithLabeledValue:(id)arg0 group:(id)arg1 contact:(id)arg2 environment:(id)arg3 ;
-(id)replacementForInvalidValue:(id)arg0 ;
-(id)updateWithLabel:(id)arg0 value:(id)arg1 ;
-(id)valueForDisplayString:(id)arg0 ;
-(int)anyContactLegacyIdentifier;
-(void)_removeSuggestion;
-(void)confirmSuggestion;
-(void)mergeItem:(id)arg0 ;
-(void)rejectSuggestion;
-(void)saveChangesImmediately:(BOOL)arg0 ;
-(void)updateLabeledValueWithLabel:(id)arg0 ;
-(void)updateLabeledValueWithValue:(id)arg0 ;


@end


#endif