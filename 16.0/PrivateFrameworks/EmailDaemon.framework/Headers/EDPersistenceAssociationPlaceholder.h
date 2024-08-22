// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EDPERSISTENCEASSOCIATIONPLACEHOLDER_H
#define EDPERSISTENCEASSOCIATIONPLACEHOLDER_H

@class EFSQLColumnSchema, NSString;

#import <Foundation/Foundation.h>


@interface EDPersistenceAssociationPlaceholder : NSObject

@property (readonly, nonatomic) EFSQLColumnSchema *column; // ivar: _column
@property (readonly, copy, nonatomic) NSString *tableName; // ivar: _tableName


-(BOOL)resolveWithSchema:(id)arg0 ;
-(id)description;
-(id)initWithColumn:(id)arg0 tableName:(id)arg1 ;


@end


#endif