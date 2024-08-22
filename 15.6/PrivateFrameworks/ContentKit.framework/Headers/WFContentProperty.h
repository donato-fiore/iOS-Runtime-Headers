// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFCONTENTPROPERTY_H
#define WFCONTENTPROPERTY_H

@class NSArray, NSSet, NSString;
@protocol NSCopying, WFPropertyListObject;

#import <Foundation/Foundation.h>


@interface WFContentProperty : NSObject <NSCopying>



@property (readonly, copy, nonatomic) NSArray *allowedOperators; // ivar: _allowedOperators
@property (readonly, copy, nonatomic) NSSet *allowedTransactionModes;
@property (readonly, nonatomic, getter=isAppendable) BOOL appendable; // ivar: _appendable
@property (readonly, copy, nonatomic) id *block; // ivar: _block
@property (readonly, nonatomic) BOOL canLowercaseName; // ivar: _canLowercaseName
@property (readonly, nonatomic) BOOL caseInsensitive; // ivar: _caseInsensitive
@property (readonly, nonatomic) NSUInteger comparableUnits; // ivar: _comparableUnits
@property (readonly, nonatomic) NSString *displayName; // ivar: _displayName
@property (readonly, nonatomic, getter=isFilterable) BOOL filterable; // ivar: _filterable
@property (readonly, nonatomic, getter=isGettable) BOOL gettable; // ivar: _gettable
@property (readonly, nonatomic) BOOL hasNegative;
@property (readonly, nonatomic) BOOL hasPossibleValues;
@property (readonly, nonatomic, getter=isIrrational) BOOL irrational; // ivar: _irrational
@property (readonly, copy, nonatomic) NSString *keyPath; // ivar: _keyPath
@property (readonly, nonatomic, getter=isLabeledValue) BOOL labeledValue;
@property (readonly, copy, nonatomic) NSString *localizedName;
@property (readonly, copy, nonatomic) NSString *localizedNegativeName;
@property (readonly, copy, nonatomic) NSString *localizedSingularItemName;
@property (readonly, nonatomic) NSString *measurementUnitType; // ivar: _measurementUnitType
@property (readonly, nonatomic) BOOL multipleValues; // ivar: _multipleValues
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, copy, nonatomic) NSString *negativeName; // ivar: _negativeName
@property (readonly, copy, nonatomic) NSArray *possibleLabels;
@property (copy, nonatomic) NSArray *possibleValues; // ivar: _possibleValues
@property (copy, nonatomic) id *possibleValuesGetter; // ivar: _possibleValuesGetter
@property (readonly, nonatomic, getter=isPrimary) BOOL primary; // ivar: _primary
@property (readonly, nonatomic) Class propertyClass; // ivar: _propertyClass
@property (readonly, nonatomic, getter=isRemovable) BOOL removable; // ivar: _removable
@property (readonly, nonatomic, getter=isSettable) BOOL settable; // ivar: _settable
@property (readonly, copy, nonatomic) id *setterBlock; // ivar: _setterBlock
@property (readonly, copy, nonatomic) NSString *singularItemName; // ivar: _singularItemName
@property (readonly, nonatomic, getter=isSortable) BOOL sortable; // ivar: _sortable
@property (readonly, nonatomic) NSUInteger tense; // ivar: _tense
@property (readonly, nonatomic) NSUInteger timeUnits; // ivar: _timeUnits
@property (readonly, copy, nonatomic) NSObject<WFPropertyListObject> *userInfo; // ivar: _userInfo
@property (readonly, nonatomic) Class valueItemClass;


+(id)possibleLabelsForClass:(Class)arg0 localized:(BOOL)arg1 ;
-(BOOL)isEquivalentToProperty:(id)arg0 ;
-(NSUInteger)equivalentHash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
// -(id)initWithKeyPath:(id)arg0 block:(id)arg1 setterBlock:(unk)arg2 name:(id)arg3 propertyClass:(unk)arg4 multipleValues:(id)arg5 filterable:(Class)arg6 sortable:(BOOL)arg7 gettable:(BOOL)arg8 settable:(BOOL)arg9 appendable:(BOOL)arg10 removable:(BOOL)arg11 primary:(BOOL)arg12 allowedOperators:(BOOL)arg13 userInfo:(BOOL)arg14 possibleValues:(id)arg15 possibleValuesGetter:(id)arg16 caseInsensitive:(id)arg17 negativeName:(id)arg18 singularItemName:(unk)arg19 irrational:(BOOL)arg20 tense:(id)arg21 timeUnits:(id)arg22 comparableUnits:(BOOL)arg23 measurementUnitType:(NSUInteger)arg24 displayName:(NSUInteger)arg25 canLowercaseName:(NSUInteger)arg26  ;
-(id)preferredTransactionModeWithCurrentMode:(id)arg0 ;
-(void)getPossibleValues:(id)arg0 ;
-(void)getValueForObject:(id)arg0 completionHandler:(id)arg1 ;
-(void)getValuesForObject:(id)arg0 completionHandler:(id)arg1 ;
-(void)updateWithValue:(id)arg0 withTransaction:(id)arg1 completion:(id)arg2 ;


@end


#endif