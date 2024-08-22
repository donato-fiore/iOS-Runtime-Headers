// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDSQLITEENTITYFOREIGNKEY_H
#define HDSQLITEENTITYFOREIGNKEY_H

@class NSString;

#import <Foundation/Foundation.h>


@interface HDSQLiteEntityForeignKey : NSObject

@property (readonly, nonatomic) NSInteger deletionAction; // ivar: _deletionAction
@property (readonly, nonatomic) Class entityClass; // ivar: _entityClass
@property (readonly, nonatomic) BOOL isDeferred; // ivar: _isDeferred
@property (readonly, copy, nonatomic) NSString *property; // ivar: _property


-(id)creationSQL;
-(id)initWithEntityClass:(Class)arg0 property:(id)arg1 deletionAction:(NSInteger)arg2 ;
-(id)initWithEntityClass:(Class)arg0 property:(id)arg1 deletionAction:(NSInteger)arg2 isDeferred:(BOOL)arg3 ;


@end


#endif