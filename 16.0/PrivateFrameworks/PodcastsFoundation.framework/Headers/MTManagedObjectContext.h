// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTMANAGEDOBJECTCONTEXT_H
#define MTMANAGEDOBJECTCONTEXT_H

@class NSManagedObjectContext, NSString;



@interface MTManagedObjectContext : NSManagedObjectContext

@property (nonatomic) BOOL isResetable; // ivar: _isResetable
@property (readonly, nonatomic) NSString *mt_immutableName; // ivar: _mt_immutableName
@property (nonatomic) NSInteger type; // ivar: _type


-(BOOL)_isInternalCoreDataQueue;
-(BOOL)handleError:(*id)arg0 withCallback:(id)arg1 ;
-(NSUInteger)countForFetchRequest:(id)arg0 error:(*id)arg1 ;
-(id)executeFetchRequest:(id)arg0 error:(*id)arg1 ;
-(id)existingObjectWithID:(id)arg0 error:(*id)arg1 ;
-(id)initWithConcurrencyType:(NSUInteger)arg0 ;
-(id)initWithConcurrencyType:(NSUInteger)arg0 name:(id)arg1 ;
-(id)objectRegisteredForID:(id)arg0 ;
-(id)objectWithID:(id)arg0 ;
-(void)deleteObject:(id)arg0 ;
-(void)insertObject:(id)arg0 ;
-(void)performBlock:(id)arg0 ;
-(void)performBlockAndWait:(id)arg0 ;
-(void)reset;
-(void)validateConcurencyType;
-(void)validatePodcastDeletion:(id)arg0 ;


@end


#endif