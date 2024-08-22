// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GDSQLGRAPHOBJECTRETRIEVER_H
#define GDSQLGRAPHOBJECTRETRIEVER_H

@class _PASSqliteDatabase, NSString;
@protocol GDObjectRetriever;

#import <Foundation/Foundation.h>


@interface GDSQLGraphObjectRetriever : NSObject <GDObjectRetriever>

 {
    _PASSqliteDatabase *_db;
    NSString *_tableName;
    NSString *_entityClassIdentifierName;
    NSInteger _entityClassIdentifier;
    Class _triplesIteratorRenderer;
}




-(id)objectForIdentifier:(id)arg0 ;
-(void)enumerateIdentifiersWithBlock:(id)arg0 ;
-(void)enumerateIdentifiersWithQuery:(id)arg0 block:(id)arg1 ;
-(void)enumerateObjectsWithBlock:(id)arg0 ;
-(void)enumerateObjectsWithQuery:(id)arg0 block:(id)arg1 ;


@end


#endif