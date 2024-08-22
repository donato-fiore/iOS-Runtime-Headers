// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _DKSOURCEMO_H
#define _DKSOURCEMO_H

@class NSManagedObject, NSString, NSSet, NSNumber;



@interface _DKSourceMO : NSManagedObject

@property (copy, nonatomic) NSString *bundleID;
@property (copy, nonatomic) NSString *deviceID;
@property (copy, nonatomic) NSString *groupID;
@property (copy, nonatomic) NSString *intentID;
@property (copy, nonatomic) NSString *itemID;
@property (retain, nonatomic) NSSet *product;
@property (copy, nonatomic) NSString *sourceID;
@property (copy, nonatomic) NSNumber *userID;


+(id)fetchRequest;


@end


#endif