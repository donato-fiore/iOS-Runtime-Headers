// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLSMANAGEDQUERYLOCATION_H
#define CLSMANAGEDQUERYLOCATION_H

@class NSManagedObject, NSDate, NSSet;



@interface CLSManagedQueryLocation : NSManagedObject

@property (retain, nonatomic) NSDate *endDate;
@property (nonatomic) CGFloat latitude;
@property (nonatomic) CGFloat longitude;
@property (retain, nonatomic) NSSet *publicEvents;
@property (nonatomic) CGFloat radius;
@property (retain, nonatomic) NSDate *startDate;
@property (nonatomic) CGFloat updateTimestamp;


+(id)entityName;


@end


#endif