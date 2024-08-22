// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PROCESS_H
#define PROCESS_H

@class NSManagedObject, NSString, NSDate, NSSet;


#import "LiveUsage.h"

@interface Process : NSManagedObject

@property (copy, nonatomic) NSString *bundleName;
@property (copy, nonatomic) NSDate *firstTimeStamp;
@property (retain, nonatomic) NSSet *hasLiveUsage;
@property (retain, nonatomic) LiveUsage *hintLiveUsage;
@property (copy, nonatomic) NSString *procName;
@property (copy, nonatomic) NSDate *timeStamp;


+(id)entityName;
+(id)fetchRequest;


@end


#endif