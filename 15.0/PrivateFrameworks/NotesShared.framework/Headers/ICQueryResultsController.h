// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICQUERYRESULTSCONTROLLER_H
#define ICQUERYRESULTSCONTROLLER_H

@class NSManagedObjectContext;

#import <Foundation/Foundation.h>

#import "ICQuery.h"
#import "ICQueryResultsControllerObjC.h"

@interface ICQueryResultsController : NSObject

@property (readonly, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (retain, nonatomic) ICQuery *query; // ivar: _query
@property (retain, nonatomic) ICQueryResultsControllerObjC *queryResultsControllerObjC; // ivar: _queryResultsControllerObjC


-(id)initWithManagedObjectContext:(id)arg0 query:(id)arg1 ;
-(id)performFetch;


@end


#endif