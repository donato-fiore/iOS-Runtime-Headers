// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BLASTDOORMETADATA_H
#define BLASTDOORMETADATA_H

@class NSString, NSUUID;

#import <Foundation/Foundation.h>

#import "BlastDoorMetadata_StorageContext.h"

@interface BlastDoorMetadata : NSObject {
    ? metadata;
}


@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BOOL has_timestamp;
@property (nonatomic, readonly) NSUUID *messageGUID;
@property (nonatomic, readonly) BlastDoorMetadata_StorageContext *storageContext;
@property (nonatomic, readonly) NSUInteger timestamp;
@property (nonatomic, readonly) BOOL wantsCheckpointing;
@property (nonatomic, readonly) BOOL wantsDeliveryReceipt;


-(id)init;


@end


#endif