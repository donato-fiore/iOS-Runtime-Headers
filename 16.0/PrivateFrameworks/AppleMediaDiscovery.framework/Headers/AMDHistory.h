// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMDHISTORY_H
#define AMDHISTORY_H

@class NSManagedObject, NSData, NSString;



@interface AMDHistory : NSManagedObject

@property (nonatomic) short day;
@property (nonatomic) short domain;
@property (retain, nonatomic) NSData *results;
@property (copy, nonatomic) NSString *useCaseId;
@property (copy, nonatomic) NSString *userId;


+(id)fetchRequest;


@end


#endif