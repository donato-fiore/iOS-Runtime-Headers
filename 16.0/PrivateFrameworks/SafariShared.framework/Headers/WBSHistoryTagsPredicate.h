// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSHISTORYTAGSPREDICATE_H
#define WBSHISTORYTAGSPREDICATE_H

@class NSString, NSDate, NSSet;
@protocol WBSHistoryPredicate;

#import <Foundation/Foundation.h>


@interface WBSHistoryTagsPredicate : NSObject <WBSHistoryPredicate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDate *endDate; // ivar: _endDate
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSSet *identifiers; // ivar: _identifiers
@property (nonatomic) NSUInteger limit; // ivar: _limit
@property (nonatomic) NSUInteger minimumItemCount; // ivar: _minimumItemCount
@property (nonatomic) NSInteger sortOrder; // ivar: _sortOrder
@property (readonly, nonatomic) NSDate *startDate; // ivar: _startDate
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger tagType; // ivar: _tagType


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStartDate:(id)arg0 endDate:(id)arg1 tagType:(NSUInteger)arg2 ;
-(id)statementForDatabase:(id)arg0 cache:(id)arg1 fetchOptions:(NSUInteger)arg2 error:(*id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif