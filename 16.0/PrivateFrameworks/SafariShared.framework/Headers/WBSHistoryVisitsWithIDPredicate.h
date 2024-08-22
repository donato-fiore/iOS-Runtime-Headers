// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSHISTORYVISITSWITHIDPREDICATE_H
#define WBSHISTORYVISITSWITHIDPREDICATE_H

@class NSString;
@protocol WBSHistoryVisitPredicate;

#import <Foundation/Foundation.h>

#import "WBSSetInt64.h"

@interface WBSHistoryVisitsWithIDPredicate : NSObject <WBSHistoryVisitPredicate>

 {
    WBSSetInt64 *_visits;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)new;
-(BOOL)evaluateServiceVisit:(id)arg0 ;
-(BOOL)evaluateVisit:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithHistoryVisitIDs:(id)arg0 ;
-(id)statementForDatabase:(id)arg0 cache:(id)arg1 fetchOptions:(NSUInteger)arg2 error:(*id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif