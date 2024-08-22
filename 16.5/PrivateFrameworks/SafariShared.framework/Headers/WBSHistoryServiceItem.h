// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSHISTORYSERVICEITEM_H
#define WBSHISTORYSERVICEITEM_H

@class NSData, NSString;


#import "WBSHistoryServiceObject.h"

@interface WBSHistoryServiceItem : WBSHistoryServiceObject

@property (copy, nonatomic) NSData *dailyVisitCounts; // ivar: _dailyVisitCounts
@property (nonatomic) BOOL shouldRecomputeDerivedVisitCountScores; // ivar: _shouldRecomputeDerivedVisitCountScores
@property (nonatomic) NSInteger statusCode; // ivar: _statusCode
@property (readonly, nonatomic) NSString *url; // ivar: _url
@property (nonatomic) NSInteger visitCount; // ivar: _visitCount
@property (nonatomic) NSInteger visitCountScore; // ivar: _visitCountScore
@property (copy, nonatomic) NSData *weeklyVisitCounts; // ivar: _weeklyVisitCounts


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithItem:(id)arg0 ;
-(id)initWithSQLRow:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif