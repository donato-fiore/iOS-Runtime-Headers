// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSHISTORYVISITSWITHITEMSPREDICATE_H
#define WBSHISTORYVISITSWITHITEMSPREDICATE_H

@class NSString;
@protocol WBSHistoryVisitPredicate;

#import <Foundation/Foundation.h>

#import "WBSSetInt64.h"

@interface WBSHistoryVisitsWithItemsPredicate : NSObject <WBSHistoryVisitPredicate>

 {
    WBSSetInt64 *_itemIdentifiers;
    WBSSetInt64 *_ignoredVisitIdentifiers;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)evaluateServiceVisit:(id)arg0 ;
-(BOOL)evaluateVisit:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithHistoryItems:(id)arg0 ignoreVisits:(id)arg1 ;
-(id)statementForDatabase:(id)arg0 cache:(id)arg1 fetchOptions:(NSUInteger)arg2 error:(*id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif