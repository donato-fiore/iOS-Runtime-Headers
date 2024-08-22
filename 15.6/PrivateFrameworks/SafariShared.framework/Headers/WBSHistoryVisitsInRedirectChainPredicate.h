// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSHISTORYVISITSINREDIRECTCHAINPREDICATE_H
#define WBSHISTORYVISITSINREDIRECTCHAINPREDICATE_H

@class NSString;
@protocol WBSHistoryVisitPredicate;

#import <Foundation/Foundation.h>

#import "WBSSetInt64.h"

@interface WBSHistoryVisitsInRedirectChainPredicate : NSObject <WBSHistoryVisitPredicate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger direction; // ivar: _direction
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) WBSSetInt64 *ignoredItemIdentifiers; // ivar: _ignoredItemIdentifiers
@property (readonly) Class superclass;
@property (readonly, nonatomic) WBSSetInt64 *visitIdentifiers; // ivar: _visitIdentifiers


+(BOOL)supportsSecureCoding;
-(BOOL)evaluateServiceVisit:(id)arg0 ;
-(BOOL)evaluateVisit:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithHistoryVisits:(id)arg0 ignoredItems:(id)arg1 direction:(NSInteger)arg2 ;
-(id)statementForDatabase:(id)arg0 cache:(id)arg1 fetchOptions:(NSUInteger)arg2 error:(*id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif