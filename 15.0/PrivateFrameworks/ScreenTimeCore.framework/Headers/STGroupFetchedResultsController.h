// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STGROUPFETCHEDRESULTSCONTROLLER_H
#define STGROUPFETCHEDRESULTSCONTROLLER_H

@class NSString, NSFetchedResultsController, NSArray;
@protocol NSFetchedResultsControllerDelegate, STGroupFetchedResultsControllerDelegate;

#import <Foundation/Foundation.h>


@interface STGroupFetchedResultsController : NSObject <NSFetchedResultsControllerDelegate>



@property (nonatomic) NSUInteger changeCounter; // ivar: _changeCounter
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<STGroupFetchedResultsControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSFetchedResultsController *resultsController; // ivar: _resultsController
@property (retain, nonatomic) NSArray *resultsControllers; // ivar: _resultsControllers
@property (retain, nonatomic) NSArray *resultsRequests; // ivar: _resultsRequests
@property (readonly) Class superclass;


-(id)initWithContext:(id)arg0 resultsRequests:(id)arg1 ;
-(id)initWithResultsRequests:(id)arg0 cacheName:(id)arg1 managedObjectContext:(id)arg2 ;
-(void)_evaluateCounter;
-(void)controller:(id)arg0 didChangeObject:(id)arg1 atIndexPath:(id)arg2 forChangeType:(NSUInteger)arg3 newIndexPath:(id)arg4 ;
-(void)controllerDidChangeContent:(id)arg0 ;
-(void)controllerWillChangeContent:(id)arg0 ;


@end


#endif