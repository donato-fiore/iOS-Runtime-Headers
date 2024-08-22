// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMDSQLITECOLUMNSPEC_H
#define AMDSQLITECOLUMNSPEC_H

@class NSString;

#import <Foundation/Foundation.h>


@interface AMDSQLiteColumnSpec : NSObject

@property (retain, nonatomic) NSString *alias; // ivar: _alias
@property (nonatomic) char dataType; // ivar: _dataType
@property (retain, nonatomic) NSObject *defaultValue; // ivar: _defaultValue
@property (retain, nonatomic) NSString *derivationExpression; // ivar: _derivationExpression
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) BOOL notNull; // ivar: _notNull
@property (retain, nonatomic) NSString *typeString; // ivar: _typeString
@property (nonatomic) BOOL unique; // ivar: _unique


+(char)getTypeEnumFor:(id)arg0 ;
-(BOOL)isNotNull;
-(BOOL)isRequired;
-(char)getType;
-(id)getCreateStatementPart;
-(id)getDefaultValue;
-(id)getName;
-(id)getSelectColumnExpression;
-(id)getSelectColumnName;
-(id)getTypeString;
-(id)initWithDict:(id)arg0 withName:(id)arg1 error:(*id)arg2 ;


@end


#endif