// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXRESULTRECORDCHANGEDETAILS_H
#define PXRESULTRECORDCHANGEDETAILS_H

@class PHFetchResultChangeDetails;

#import <Foundation/Foundation.h>

#import "PXResultRecord.h"

@interface PXResultRecordChangeDetails : NSObject

@property (readonly, nonatomic) PHFetchResultChangeDetails *exposedFetchResultChangeDetails; // ivar: _exposedFetchResultChangeDetails
@property (readonly, nonatomic) PHFetchResultChangeDetails *keyAssetsFetchResultChangeDetails; // ivar: _keyAssetsFetchResultChangeDetails
@property (readonly, nonatomic) PXResultRecord *resultRecordAfterChanges; // ivar: _resultRecordAfterChanges
@property (readonly, nonatomic) PXResultRecord *resultRecordBeforeChanges; // ivar: _resultRecordBeforeChanges


+(id)resultRecordChangeDetailsFor:(id)arg0 withChange:(id)arg1 ;
-(id)description;
-(id)initWithResultRecordBeforeChanges:(id)arg0 resultRecordAfterChanges:(id)arg1 exposedFetchResultChangeDetails:(id)arg2 keyAssetsFetchResultChangeDetails:(id)arg3 ;


@end


#endif