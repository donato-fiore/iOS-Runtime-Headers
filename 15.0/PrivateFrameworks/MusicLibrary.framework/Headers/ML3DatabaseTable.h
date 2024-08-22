// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ML3DATABASETABLE_H
#define ML3DATABASETABLE_H

@class NSArray, NSString;
@protocol NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface ML3DatabaseTable : NSObject <NSCopying, NSMutableCopying>



@property (readonly, nonatomic) NSArray *columns; // ivar: _columns
@property (readonly, nonatomic) NSArray *foreignKeyConstraints; // ivar: _foreignKeyConstraints
@property (readonly, nonatomic) NSString *name; // ivar: _name


-(id)_copyWithZone:(struct _NSZone *)arg0 concreteClass:(Class)arg1 ;
-(id)columnDefinitionsSQL;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)createTableSQLWithExistenceClause:(BOOL)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif