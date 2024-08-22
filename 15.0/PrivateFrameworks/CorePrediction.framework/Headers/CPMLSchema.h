// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPMLSCHEMA_H
#define CPMLSCHEMA_H

@class NSMutableArray, NSMutableString;

#import <Foundation/Foundation.h>


@interface CPMLSchema : NSObject {
    NSMutableArray *schema;
    NSMutableArray *schemaHDef;
    NSMutableArray *_categoricalDataList;
    NSMutableArray *_replaceMissingValue;
    NSMutableArray *_matchReplaceValue;
    int yColumnPosition;
}


@property (readonly, nonatomic) NSMutableArray *attribute; // ivar: attribute
@property (readonly, nonatomic) NSMutableArray *availableOptions; // ivar: availableOptions
@property (readonly, nonatomic) NSMutableArray *indexColumnList; // ivar: _indexColumnList
@property (readonly, nonatomic) NSMutableArray *nsRemapTable; // ivar: nsRemapTable
@property (readonly, nonatomic) NSMutableString *schemaHeader; // ivar: schemaHeader
@property (readonly, nonatomic) NSMutableString *schemaHeaderWithType; // ivar: schemaHeaderWithType


-(BOOL)hasOptions:(NSUInteger)arg0 ;
-(BOOL)isColumnContinous:(unsigned int)arg0 ;
-(BOOL)isIntType:(NSUInteger)arg0 ;
-(BOOL)isNumType:(NSUInteger)arg0 ;
-(BOOL)isRealType:(NSUInteger)arg0 ;
-(BOOL)isStringType:(NSUInteger)arg0 ;
-(BOOL)isVectorType:(NSUInteger)arg0 ;
-(BOOL)matchSubstituteValue:(NSUInteger)arg0 theValue:(id)arg1 ;
-(NSUInteger)getTotalAttributes;
-(NSUInteger)getUserDefinedCategoricalDataCount:(NSUInteger)arg0 ;
-(id)getColumnName:(NSUInteger)arg0 ;
-(id)getSubstituteValue:(NSUInteger)arg0 ;
-(id)getUserDefinedCategoricalData:(NSUInteger)arg0 ;
-(id)init:(id)arg0 ;
-(id)initWithPlist:(id)arg0 ;
-(int)getColumnPosition:(id)arg0 ;
-(int)getSchemaType:(NSUInteger)arg0 ;
-(int)getVectorContent:(NSUInteger)arg0 ;
-(int)getYColumnPosition;


@end


#endif