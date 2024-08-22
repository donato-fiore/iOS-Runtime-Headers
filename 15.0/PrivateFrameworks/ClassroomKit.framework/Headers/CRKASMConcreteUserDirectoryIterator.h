// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRKASMCONCRETEUSERDIRECTORYITERATOR_H
#define CRKASMCONCRETEUSERDIRECTORYITERATOR_H

@class NSString, NSMutableArray;
@protocol CRKASMUserDirectoryIterator, CRKClassKitQuery, CRKClassKitRosterRequirements;

#import <Foundation/Foundation.h>


@interface CRKASMConcreteUserDirectoryIterator : NSObject <CRKASMUserDirectoryIterator>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isExecuting) BOOL executing; // ivar: _executing
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<CRKClassKitQuery> *query; // ivar: _query
@property (readonly, nonatomic) NSMutableArray *queryCompletionQueue; // ivar: _queryCompletionQueue
@property (readonly, nonatomic) NSObject<CRKClassKitRosterRequirements> *requirements; // ivar: _requirements
@property (readonly) Class superclass;


+(id)iteratorWithRosterRequirements:(id)arg0 queryGenerator:(id)arg1 ;
-(id)initWithRequirements:(id)arg0 query:(id)arg1 ;
-(void)fetchNextUsersWithCompletion:(id)arg0 ;
-(void)queryDidFinishExecutingWithResults:(id)arg0 error:(id)arg1 ;
-(void)serviceQueryQueue;


@end


#endif