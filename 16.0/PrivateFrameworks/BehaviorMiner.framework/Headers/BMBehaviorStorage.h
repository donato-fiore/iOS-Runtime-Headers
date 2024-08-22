// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BMBEHAVIORSTORAGE_H
#define BMBEHAVIORSTORAGE_H

@class NSURL, NSPersistentContainer, NSManagedObjectContext;

#import <Foundation/Foundation.h>

#import "BMManagedObjectConverter.h"
#import "BMBehaviorDatabaseMetadata.h"

@interface BMBehaviorStorage : NSObject

@property (copy, nonatomic) NSURL *URL; // ivar: _URL
@property (retain, nonatomic) NSPersistentContainer *container; // ivar: _container
@property (retain, nonatomic) NSManagedObjectContext *context; // ivar: _context
@property (retain, nonatomic) BMManagedObjectConverter *converter; // ivar: _converter
@property (retain, nonatomic) BMBehaviorDatabaseMetadata *metadata; // ivar: _metadata
@property (readonly, nonatomic) BOOL readOnly; // ivar: _readOnly


-(id)description;
-(id)fetchRulesWithAbsoluteSupport:(NSUInteger)arg0 support:(CGFloat)arg1 confidence:(CGFloat)arg2 conviction:(CGFloat)arg3 lift:(CGFloat)arg4 rulePowerFactor:(CGFloat)arg5 uniqueDaysLastWeek:(NSUInteger)arg6 uniqueDaysTotal:(NSUInteger)arg7 filters:(id)arg8 limit:(NSUInteger)arg9 error:(*id)arg10 ;
-(id)fetchRulesWithSupport:(CGFloat)arg0 confidence:(CGFloat)arg1 filters:(id)arg2 error:(*id)arg3 ;
-(id)fetchRulesWithSupport:(CGFloat)arg0 confidence:(CGFloat)arg1 filters:(id)arg2 limit:(NSUInteger)arg3 error:(*id)arg4 ;
-(id)init;
-(id)initWithURL:(id)arg0 readOnly:(BOOL)arg1 ;
-(id)initWithURL:(id)arg0 readOnly:(BOOL)arg1 error:(*id)arg2 ;
-(void)resetStorageWithMetadata:(id)arg0 error:(*id)arg1 ;
-(void)saveRules:(id)arg0 error:(*id)arg1 ;


@end


#endif