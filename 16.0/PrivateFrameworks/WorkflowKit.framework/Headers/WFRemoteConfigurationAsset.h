// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFREMOTECONFIGURATIONASSET_H
#define WFREMOTECONFIGURATIONASSET_H

@class WFFileRepresentation, NSString, NSNumber, CKRecordID, NSData;
@protocol WFCloudKitItem;

#import <Foundation/Foundation.h>


@interface WFRemoteConfigurationAsset : NSObject <WFCloudKitItem>



@property (retain, nonatomic) WFFileRepresentation *assetDataFile; // ivar: _assetDataFile
@property (retain, nonatomic) NSString *assetType; // ivar: _assetType
@property (copy, nonatomic) NSNumber *buildNumber; // ivar: _buildNumber
@property (copy, nonatomic) NSString *configuration; // ivar: _configuration
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CKRecordID *identifier; // ivar: identifier
@property (copy, nonatomic) NSData *recordSystemFieldsData;
@property (retain, nonatomic) NSString *shortVersion; // ivar: _shortVersion
@property (readonly) Class superclass;


+(id)properties;
+(id)recordType;


@end


#endif