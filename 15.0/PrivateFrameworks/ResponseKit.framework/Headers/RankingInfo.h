// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RANKINGINFO_H
#define RANKINGINFO_H

@class NSManagedObject, NSString, NSDate;



@interface RankingInfo : NSManagedObject

@property (copy, nonatomic) NSString *category;
@property (nonatomic) short inputMethod;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *rankedList;
@property (copy, nonatomic) NSString *recipientId;
@property (copy, nonatomic) NSString *response;
@property (nonatomic) short source;
@property (copy, nonatomic) NSDate *timestamp;


+(id)fetchRequest;


@end


#endif