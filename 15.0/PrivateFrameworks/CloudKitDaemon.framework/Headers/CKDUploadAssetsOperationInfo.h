// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKDUPLOADASSETSOPERATIONINFO_H
#define CKDUPLOADASSETSOPERATIONINFO_H

@class CKDatabaseOperationInfo, NSDictionary, NSArray;



@interface CKDUploadAssetsOperationInfo : CKDatabaseOperationInfo

@property (retain, nonatomic) NSDictionary *assetUUIDToExpectedProperties; // ivar: _assetUUIDToExpectedProperties
@property (retain, nonatomic) NSArray *assetsToUpload; // ivar: _assetsToUpload
@property (retain, nonatomic) NSDictionary *packageUUIDToExpectedProperties; // ivar: _packageUUIDToExpectedProperties
@property (nonatomic) BOOL temporary; // ivar: _temporary




@end


#endif