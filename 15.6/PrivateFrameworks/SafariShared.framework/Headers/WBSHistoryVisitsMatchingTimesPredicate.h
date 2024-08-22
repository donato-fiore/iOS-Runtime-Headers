// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSHISTORYVISITSMATCHINGTIMESPREDICATE_H
#define WBSHISTORYVISITSMATCHINGTIMESPREDICATE_H

@class NSDictionary, NSString;
@protocol WBSHistoryVisitPredicate, WBSHistoryStreamedVisitPredicate;

#import <Foundation/Foundation.h>


@interface WBSHistoryVisitsMatchingTimesPredicate : NSObject <WBSHistoryVisitPredicate, WBSHistoryStreamedVisitPredicate>

 {
    NSDictionary *_itemVisitTimeMap;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)_evaluateVisitWithItemID:(NSInteger)arg0 visitTime:(CGFloat)arg1 ;
-(BOOL)evaluateHistoryStreamedVisit:(struct _HistoryStreamedVisit *)arg0 ;
-(BOOL)evaluateServiceVisit:(id)arg0 ;
-(BOOL)evaluateVisit:(id)arg0 ;
-(id)initWithCloudVisitIdentifiers:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithItemVisitTimeMap:(id)arg0 ;
-(id)statementForDatabase:(id)arg0 cache:(id)arg1 fetchOptions:(NSUInteger)arg2 error:(*id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif