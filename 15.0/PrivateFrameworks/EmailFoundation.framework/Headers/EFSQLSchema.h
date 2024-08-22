// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EFSQLSCHEMA_H
#define EFSQLSCHEMA_H

@class NSDictionary, NSArray;

#import <Foundation/Foundation.h>


@interface EFSQLSchema : NSObject {
    NSDictionary *_tablesByName;
}


@property (readonly, copy, nonatomic) NSArray *tables;


-(id)definitionWithDatabaseName:(id)arg0 ;
-(id)definitionWithDatabaseName:(id)arg0 includeIndexes:(BOOL)arg1 ;
-(id)description;
-(id)indexDefinitionsWithDatabaseName:(id)arg0 ;
-(id)initWithTables:(id)arg0 ;
-(id)tableForName:(id)arg0 ;


@end


#endif