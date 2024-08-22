// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFPROVISIONINGDATA_H
#define SFPROVISIONINGDATA_H

@class NSManagedObject, NSString, NSData, NSNumber, NSDate;



@interface SFProvisioningData : NSManagedObject

@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSData *map;
@property (copy, nonatomic) NSNumber *tag;
@property (copy, nonatomic) NSDate *timeStamp;


+(id)entityName;
+(id)fetchRequest;


@end


#endif