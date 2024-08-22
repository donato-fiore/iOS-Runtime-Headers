// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GKCDIDSINFO_H
#define GKCDIDSINFO_H

@class NSManagedObject, NSNumber, NSString, NSDate;


#import "GKCDIDSInfoList.h"

@interface GKCDIDSInfo : NSManagedObject

@property (copy, nonatomic) NSNumber *cohort;
@property (copy, nonatomic) NSString *contactAssociationID;
@property (copy, nonatomic) NSString *handle;
@property (retain, nonatomic) GKCDIDSInfoList *list;
@property (copy, nonatomic) NSDate *timeStamp;


+(id)fetchRequest;


@end


#endif