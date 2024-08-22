// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTFETCHEDRESULTSCONTROLLER_H
#define MTFETCHEDRESULTSCONTROLLER_H

@class NSFetchedResultsController, NSMutableDictionary, NSMutableArray, NSString, NSFetchRequest, NSArray, NSManagedObjectContext;
@protocol NSFetchedResultsControllerDelegate, MTFetchedResultsControllerProtocol;

#import <Foundation/Foundation.h>


@interface MTFetchedResultsController : NSObject <NSFetchedResultsControllerDelegate, MTFetchedResultsControllerProtocol>

 {
    NSFetchedResultsController *_frc;
    NSMutableDictionary *_propertyCache;
    NSMutableArray *_changes;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<NSFetchedResultsControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSFetchRequest *fetchRequest;
@property (readonly, nonatomic) NSArray *fetchedObjects;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (copy, nonatomic) NSArray *propertyKeys; // ivar: _propertyKeys
@property (readonly, nonatomic) NSArray *sections;
@property (readonly) Class superclass;


-(BOOL)_hasManagedObjectChanged:(id)arg0 ;
-(BOOL)performFetch:(*id)arg0 ;
-(id)_dictionaryForObject:(id)arg0 ;
-(id)_dictionaryFromCacheForObjectID:(id)arg0 ;
-(id)indexPathForObject:(id)arg0 ;
-(id)initWithFetchRequest:(id)arg0 managedObjectContext:(id)arg1 sectionNameKeyPath:(id)arg2 cacheName:(id)arg3 ;
-(id)objectAtIndexPath:(id)arg0 ;
-(void)_removeObjectFromCacheWithId:(id)arg0 ;
-(void)_updateCacheWithManagedObject:(id)arg0 ;
-(void)controller:(id)arg0 didChangeObject:(id)arg1 atIndexPath:(id)arg2 forChangeType:(NSUInteger)arg3 newIndexPath:(id)arg4 ;
-(void)controllerDidChangeContent:(id)arg0 ;
-(void)controllerWillChangeContent:(id)arg0 ;


@end


#endif