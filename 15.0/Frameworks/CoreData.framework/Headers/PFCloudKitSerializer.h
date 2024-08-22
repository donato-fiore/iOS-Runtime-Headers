// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PFCLOUDKITSERIALIZER_H
#define PFCLOUDKITSERIALIZER_H

@class NSMutableDictionary, NSString, NSMutableArray, CKRecordZone;
@protocol PFCloudKitSerializerDelegate;

#import <Foundation/Foundation.h>

#import "NSCloudKitMirroringDelegateOptions.h"
#import "PFCloudKitMetadataCache.h"

@interface PFCloudKitSerializer : NSObject {
    NSMutableDictionary *_manyToManyRecordNameToRecord;
    NSString *_recordNamePrefix;
    NSCloudKitMirroringDelegateOptions *_mirroringOptions;
    NSObject<PFCloudKitSerializerDelegate> *_delegate;
    NSMutableArray *_writtenAssetURLs;
    PFCloudKitMetadataCache *_metadataCache;
    CKRecordZone *_recordZone;
}




+(id)defaultRecordZoneIDForDatabaseScope:(NSInteger)arg0 ;
+(void)_invalidateStaticCaches;
+(void)initialize;
-(id)initWithMirroringOptions:(id)arg0 metadataCache:(id)arg1 recordNamePrefix:(id)arg2 ;
-(void)dealloc;


@end


#endif