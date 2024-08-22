// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PHIMPORTASSETTHUMBNAILDATAREQUEST_H
#define PHIMPORTASSETTHUMBNAILDATAREQUEST_H



#import "PHImportAssetDataRequest.h"

@interface PHImportAssetThumbnailDataRequest : PHImportAssetDataRequest

@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, nonatomic) NSUInteger longestSide; // ivar: _longestSide
@property (readonly, nonatomic) unsigned char priority; // ivar: _priority


-(id)description;
-(id)initWithAsset:(id)arg0 longestSide:(NSUInteger)arg1 priority:(unsigned char)arg2 ;
-(id)requestAsset;


@end


#endif