// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _DKHISTOGRAMMO_H
#define _DKHISTOGRAMMO_H

@class NSManagedObject, NSString, NSDate, NSNumber, NSSet;



@interface _DKHistogramMO : NSManagedObject

@property (copy, nonatomic) NSString *customIdentifier;
@property (copy, nonatomic) NSString *deviceIdentifier;
@property (copy, nonatomic) NSDate *endDate;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSDate *startDate;
@property (copy, nonatomic) NSString *streamName;
@property (copy, nonatomic) NSNumber *streamTypeCode;
@property (retain, nonatomic) NSSet *value;


+(id)fetchRequest;


@end


#endif