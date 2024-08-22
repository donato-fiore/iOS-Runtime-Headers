// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICQUERYRESULTSCONTROLLEROBJC_H
#define ICQUERYRESULTSCONTROLLEROBJC_H

@class NSManagedObjectContext;

#import <Foundation/Foundation.h>

#import "ICQueryObjC.h"

@interface ICQueryResultsControllerObjC : NSObject

@property (nonatomic, readonly) id *fetchRequest;
@property (nonatomic, readonly) NSManagedObjectContext *managedObjectContext; // ivar: managedObjectContext
@property (nonatomic, retain) ICQueryObjC *query; // ivar: query


-(id)init;
-(id)initWithManagedObjectContext:(id)arg0 query:(id)arg1 ;
-(id)performFetch;


@end


#endif