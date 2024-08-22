// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKPUBLISHASSETSOPERATIONINFO_H
#define CKPUBLISHASSETSOPERATIONINFO_H

@class NSDictionary, NSArray;
@protocol NSSecureCoding;


#import "CKDatabaseOperationInfo.h"

@interface CKPublishAssetsOperationInfo : CKDatabaseOperationInfo <NSSecureCoding>



@property (nonatomic) NSUInteger URLOptions; // ivar: _URLOptions
@property (retain, nonatomic) NSDictionary *fileNamesByAssetFieldNames; // ivar: _fileNamesByAssetFieldNames
@property (retain, nonatomic) NSArray *recordIDs; // ivar: _recordIDs
@property (nonatomic) NSUInteger requestedTTL; // ivar: _requestedTTL


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif