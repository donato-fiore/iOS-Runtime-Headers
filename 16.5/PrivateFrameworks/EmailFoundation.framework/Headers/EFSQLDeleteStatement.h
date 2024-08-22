// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EFSQLDELETESTATEMENT_H
#define EFSQLDELETESTATEMENT_H

@class NSString, NSMutableArray;
@protocol EFSQLValueExpressable;

#import <Foundation/Foundation.h>


@interface EFSQLDeleteStatement : NSObject {
    NSString *_table;
    id<EFSQLValueExpressable> *_whereClause;
    NSMutableArray *_orderExpressions;
}


@property (nonatomic) NSUInteger limit; // ivar: _limit
@property (readonly, copy, nonatomic) NSString *queryString;


-(id)initWithTable:(id)arg0 ;
-(id)initWithTable:(id)arg0 where:(id)arg1 ;
-(void)orderBy:(id)arg0 ascending:(BOOL)arg1 ;
-(void)orderByColumn:(id)arg0 ascending:(BOOL)arg1 ;


@end


#endif