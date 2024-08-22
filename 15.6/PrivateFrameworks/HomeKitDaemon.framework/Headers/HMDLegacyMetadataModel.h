// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDLEGACYMETADATAMODEL_H
#define HMDLEGACYMETADATAMODEL_H

@class NSData;


#import "HMDLegacyModel.h"

@interface HMDLegacyMetadataModel : HMDLegacyModel

@property (retain, nonatomic) NSData *cloudMetadata;


+(id)createWithLegacyRecord:(id)arg0 modelContainer:(id)arg1 error:(*id)arg2 ;
+(id)properties;
-(id)encodeWithExistingRecord:(id)arg0 cloudZone:(id)arg1 modelContainer:(id)arg2 error:(*id)arg3 ;
-(id)init;


@end


#endif