// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFFLOW_H
#define SFFLOW_H

@class NSManagedObject, NSDate, NSSet, NSString, NSNumber;


#import "SFNetworkAttachment.h"

@interface SFFlow : NSManagedObject

@property (copy, nonatomic) NSDate *firstTimeStamp;
@property (retain, nonatomic) NSSet *hasLivePerformance;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSNumber *kind;
@property (retain, nonatomic) SFNetworkAttachment *onNetwork;
@property (copy, nonatomic) NSString *remoteID;
@property (copy, nonatomic) NSDate *timeStamp;


+(id)entityName;
+(id)fetchRequest;


@end


#endif