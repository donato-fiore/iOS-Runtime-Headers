// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _CADFETCHCALENDARITEMSWITHPREDICATEOPERATION_H
#define _CADFETCHCALENDARITEMSWITHPREDICATEOPERATION_H

@class NSOperation, NSPredicate;



@interface _CADFetchCalendarItemsWithPredicateOperation : NSOperation {
    NSPredicate *_predicate;
    int _entityType;
    ? _database;
    id *_completion;
}


@property (readonly, nonatomic) int fetchIdentifier; // ivar: _fetchIdentifier


-(?)initWithPredicate:(?)arg0 entityType:(?)arg1 database:(?)arg2 fetchIdentifiercompletionHandler;
-(void)cancel;
-(void)dealloc;
-(void)main;


@end


#endif