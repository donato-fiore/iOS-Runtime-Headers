// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFCONTENTPROPERTYBUILDER_H
#define WFCONTENTPROPERTYBUILDER_H

@class NSArray, NSNumber, NSString;
@protocol WFPropertyListObject;

#import <Foundation/Foundation.h>


@interface WFContentPropertyBuilder : NSObject

@property (copy, nonatomic) NSArray *allowedOperators; // ivar: _allowedOperators
@property (copy, nonatomic) NSNumber *appendable; // ivar: _appendable
@property (copy, nonatomic) id *block; // ivar: _block
@property (copy, nonatomic) NSNumber *canLowercaseName; // ivar: _canLowercaseName
@property (copy, nonatomic) NSNumber *caseInsensitive; // ivar: _caseInsensitive
@property (copy, nonatomic) NSNumber *comparableUnits; // ivar: _comparableUnits
@property (copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (copy, nonatomic) NSNumber *filterable; // ivar: _filterable
@property (copy, nonatomic) NSNumber *gettable; // ivar: _gettable
@property (nonatomic, getter=isIrrational) BOOL irrational; // ivar: _irrational
@property (copy, nonatomic) NSString *keyPath; // ivar: _keyPath
@property (copy, nonatomic) NSString *measurementUnitType; // ivar: _measurementUnitType
@property (copy, nonatomic) NSNumber *multipleValues; // ivar: _multipleValues
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (copy, nonatomic) NSString *negativeName; // ivar: _negativeName
@property (copy, nonatomic) NSArray *possibleValues; // ivar: _possibleValues
@property (copy, nonatomic) id *possibleValuesGetter; // ivar: _possibleValuesGetter
@property (copy, nonatomic) NSNumber *primary; // ivar: _primary
@property (retain, nonatomic) Class propertyClass; // ivar: _propertyClass
@property (copy, nonatomic) NSNumber *removable; // ivar: _removable
@property (copy, nonatomic) NSNumber *settable; // ivar: _settable
@property (copy, nonatomic) id *setterBlock; // ivar: _setterBlock
@property (copy, nonatomic) NSString *singularItemName; // ivar: _singularItemName
@property (copy, nonatomic) NSNumber *sortable; // ivar: _sortable
@property (copy, nonatomic) NSNumber *tense; // ivar: _tense
@property (copy, nonatomic) NSNumber *timeUnits; // ivar: _timeUnits
@property (copy, nonatomic) NSObject<WFPropertyListObject> *userInfo; // ivar: _userInfo


// +(id)block:(id)arg0 name:(unk)arg1 class:(id)arg2  ;
// +(id)block:(id)arg0 setterBlock:(unk)arg1 name:(id)arg2 class:(unk)arg3  ;
+(id)keyPath:(id)arg0 name:(id)arg1 class:(Class)arg2 ;
// +(id)keyPath:(id)arg0 setterBlock:(id)arg1 name:(unk)arg2 class:(id)arg3  ;
-(id)allowedOperators:(id)arg0 ;
-(id)appendable:(BOOL)arg0 ;
-(id)build;
-(id)canLowercaseName:(BOOL)arg0 ;
-(id)caseInsensitive:(BOOL)arg0 ;
-(id)comparableUnits:(NSUInteger)arg0 ;
-(id)displayName:(id)arg0 ;
-(id)filterable:(BOOL)arg0 ;
-(id)gettable:(BOOL)arg0 ;
-(id)irrational:(BOOL)arg0 ;
-(id)measurementUnitType:(id)arg0 ;
-(id)multipleValues:(BOOL)arg0 ;
-(id)negativeName:(id)arg0 ;
-(id)possibleValues:(id)arg0 ;
-(id)possibleValuesGetter:(id)arg0 ;
-(id)primary:(BOOL)arg0 ;
-(id)removable:(BOOL)arg0 ;
-(id)setterBlock:(id)arg0 ;
-(id)singularItemName:(id)arg0 ;
-(id)sortable:(BOOL)arg0 ;
-(id)tense:(NSUInteger)arg0 ;
-(id)timeUnits:(NSUInteger)arg0 ;
-(id)userInfo:(id)arg0 ;


@end


#endif