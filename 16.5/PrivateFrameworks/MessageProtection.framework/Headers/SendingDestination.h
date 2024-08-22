// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SENDINGDESTINATION_H
#define SENDINGDESTINATION_H

@class NSManagedObject, NSString, NSDate;



@interface SendingDestination : NSManagedObject

@property (copy, nonatomic) NSString *destinationHash;
@property (copy, nonatomic) NSDate *registrationDate;
@property (nonatomic) int validOutgoingCounter;


+(id)fetchRequest;


@end


#endif