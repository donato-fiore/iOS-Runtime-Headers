// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EFSQLUPDATESTATEMENT_H
#define EFSQLUPDATESTATEMENT_H

@class NSMutableDictionary, NSString;
@protocol EFSQLUpdateStatementValue, EFSQLValueExpressable;

#import <Foundation/Foundation.h>


@interface EFSQLUpdateStatement : NSObject <EFSQLUpdateStatementValue>

 {
    NSMutableDictionary *_bindables;
    NSMutableDictionary *_expressables;
    NSString *_table;
    NSUInteger _conflictResolution;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *queryString;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<EFSQLValueExpressable> *whereClause; // ivar: _whereClause


-(id)initWithTable:(id)arg0 ;
-(id)initWithTable:(id)arg0 conflictResolution:(NSUInteger)arg1 ;
-(id)objectForKeyedSubscript:(id)arg0 ;
-(void)enumerateBindingNamesAndValuesUsingBlock:(id)arg0 ;
-(void)setObject:(id)arg0 forKeyedSubscript:(id)arg1 ;


@end


#endif