// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SHTARGETINGMETADATAMO_H
#define SHTARGETINGMETADATAMO_H

@class NSManagedObject, NSString, NSDate;



@interface SHTargetingMetadataMO : NSManagedObject

@property (copy, nonatomic) NSString *etag;
@property (copy, nonatomic) NSDate *fetchDate;
@property (copy, nonatomic) NSString *storefront;


+(id)fetchRequest;


@end


#endif