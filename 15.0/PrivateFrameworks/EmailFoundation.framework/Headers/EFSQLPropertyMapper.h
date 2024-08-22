// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EFSQLPROPERTYMAPPER_H
#define EFSQLPROPERTYMAPPER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface EFSQLPropertyMapper : NSObject

@property (retain, nonatomic) NSMutableDictionary *lookupValues; // ivar: _lookupValues


+(id)emptyPropertyMapper;
-(BOOL)hasLookupKey:(id)arg0 class:(Class)arg1 property:(SEL)arg2 ;
-(id)_findAllProtocolsOfClass:(Class)arg0 withProperty:(SEL)arg1 ;
-(id)_qualifiedColumnExpressionsForColumn:(id)arg0 availableTables:(id)arg1 replaceNULL:(BOOL)arg2 ;
-(id)columnForClass:(Class)arg0 property:(SEL)arg1 ;
-(id)columnForLookupKey:(id)arg0 value:(id)arg1 ;
-(id)columnForProtocol:(id)arg0 property:(SEL)arg1 ;
-(id)columnNameForClass:(Class)arg0 property:(SEL)arg1 ;
-(id)columnNameForLookupKey:(id)arg0 value:(id)arg1 ;
-(id)columnNameForProtocol:(id)arg0 property:(SEL)arg1 ;
-(id)init;
-(id)merge:(id)arg0 ;
-(id)qualifiedColumnExpressionForClass:(Class)arg0 property:(SEL)arg1 availableTables:(id)arg2 ;
-(id)qualifiedColumnExpressionForLookupKey:(id)arg0 value:(id)arg1 availableTables:(id)arg2 ;
-(id)qualifiedColumnExpressionsForClass:(Class)arg0 property:(SEL)arg1 availableTables:(id)arg2 ;
-(id)qualifiedColumnNamesForClass:(Class)arg0 property:(SEL)arg1 availableTables:(id)arg2 ;
-(id)valueForLookupKey:(id)arg0 class:(Class)arg1 property:(SEL)arg2 ;
-(id)valueForLookupKey:(id)arg0 protocol:(id)arg1 property:(SEL)arg2 ;
-(void)_registerQualifiedColumns:(id)arg0 lookupKeys:(id)arg1 forClass:(Class)arg2 property:(SEL)arg3 ;
-(void)registerColumn:(id)arg0 forClass:(Class)arg1 property:(SEL)arg2 lookupKeys:(id)arg3 ;
-(void)registerColumn:(id)arg0 forProtocol:(id)arg1 property:(SEL)arg2 lookupKeys:(id)arg3 ;
-(void)registerColumnName:(id)arg0 table:(id)arg1 lookupKeys:(id)arg2 ;
-(void)registerColumnName:(id)arg0 table:(id)arg1 lookupKeys:(id)arg2 forClass:(Class)arg3 property:(SEL)arg4 ;
-(void)registerColumnNames:(id)arg0 table:(id)arg1 forClass:(Class)arg2 property:(SEL)arg3 ;


@end


#endif