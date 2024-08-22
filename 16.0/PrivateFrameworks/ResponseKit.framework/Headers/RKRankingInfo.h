// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RKRANKINGINFO_H
#define RKRANKINGINFO_H

@class NSManagedObject, NSString, NSDate;



@interface RKRankingInfo : NSManagedObject

@property (retain, nonatomic) NSString *category;
@property (nonatomic) NSUInteger inputMethod;
@property (retain, nonatomic) NSString *message;
@property (retain, nonatomic) NSString *rankedList;
@property (retain, nonatomic) NSString *recipientId;
@property (retain, nonatomic) NSString *response;
@property (nonatomic) NSInteger responseId;
@property (nonatomic) NSUInteger source;
@property (retain, nonatomic) NSDate *timestamp;




@end


#endif