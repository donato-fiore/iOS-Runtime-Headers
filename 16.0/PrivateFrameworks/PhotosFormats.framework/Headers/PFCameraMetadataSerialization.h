// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PFCAMERAMETADATASERIALIZATION_H
#define PFCAMERAMETADATASERIALIZATION_H


#import <Foundation/Foundation.h>


@interface PFCameraMetadataSerialization : NSObject



+(id)deserializedMetadataFromCameraClientMetadata:(id)arg0 error:(*id)arg1 ;
+(id)deserializedMetadataFromData:(id)arg0 error:(*id)arg1 ;
+(id)deserializedMetadataFromPrivateClientMetadata:(id)arg0 error:(*id)arg1 ;
+(id)serializedDataFromCameraClientMetadata:(id)arg0 error:(*id)arg1 ;
+(id)serializedDataFromClientMetadata:(id)arg0 contactIDsInProximity:(id)arg1 sharedLibraryMode:(NSInteger)arg2 error:(*id)arg3 ;
+(id)serializedDataFromClientMetadata:(id)arg0 error:(*id)arg1 ;


@end


#endif