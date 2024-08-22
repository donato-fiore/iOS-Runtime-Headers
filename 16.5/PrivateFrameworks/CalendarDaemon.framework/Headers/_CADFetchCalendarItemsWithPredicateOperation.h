// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _CADFETCHCALENDARITEMSWITHPREDICATEOPERATION_H
#define _CADFETCHCALENDARITEMSWITHPREDICATEOPERATION_H

@class NSOperation, NSString;
@protocol CalCancellationToken;


#import "CADPredicate.h"
#import "ClientConnection.h"

@interface _CADFetchCalendarItemsWithPredicateOperation : NSOperation <CalCancellationToken>

 {
    CADPredicate *_predicate;
    int _entityType;
    ClientConnection *_connection;
    id *_completion;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) int fetchIdentifier; // ivar: _fetchIdentifier
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isCancelled;
@property (readonly) Class superclass;


+(?)queryDatabase:(?)arg0 withID:(?)arg1 predicate:(?)arg2 connection:(?)arg3 serializercancellationToken;
+(BOOL)isJunkEvent:(*void)arg0 ;
+(id)performSynchronouslyWithPredicate:(id)arg0 entityType:(int)arg1 connection:(id)arg2 fetchIdentifier:(int)arg3 cancellationToken:(id)arg4 ;
-(id)initWithPredicate:(id)arg0 entityType:(int)arg1 connection:(id)arg2 fetchIdentifier:(int)arg3 completionHandler:(id)arg4 ;
-(void)cancel;
-(void)main;


@end


#endif