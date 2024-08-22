// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLASTDOORMETADATA_STORAGECONTEXT_H
#define BLASTDOORMETADATA_STORAGECONTEXT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface BlastDoorMetadata_StorageContext : NSObject {
    ? metadata_StorageContext;
}


@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BOOL isFromStorage;
@property (nonatomic, readonly) BOOL isLastFromStorage;


-(id)init;


@end


#endif