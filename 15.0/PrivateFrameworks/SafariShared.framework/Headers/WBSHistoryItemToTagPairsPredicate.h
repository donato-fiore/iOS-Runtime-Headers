// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSHISTORYITEMTOTAGPAIRSPREDICATE_H
#define WBSHISTORYITEMTOTAGPAIRSPREDICATE_H

@class NSString, NSDate;
@protocol WBSHistoryPredicate;

#import <Foundation/Foundation.h>


@interface WBSHistoryItemToTagPairsPredicate : NSObject <WBSHistoryPredicate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDate *endDate; // ivar: _endDate
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSDate *startDate; // ivar: _startDate
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStartDate:(id)arg0 endDate:(id)arg1 ;
-(id)statementForDatabase:(id)arg0 cache:(id)arg1 fetchOptions:(NSUInteger)arg2 error:(*id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif