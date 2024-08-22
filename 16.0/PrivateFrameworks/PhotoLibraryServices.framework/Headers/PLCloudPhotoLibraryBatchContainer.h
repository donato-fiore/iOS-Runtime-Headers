// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLCLOUDPHOTOLIBRARYBATCHCONTAINER_H
#define PLCLOUDPHOTOLIBRARYBATCHCONTAINER_H

@class CPLChangeBatch;

#import <Foundation/Foundation.h>


@interface PLCloudPhotoLibraryBatchContainer : NSObject

@property (retain, nonatomic) CPLChangeBatch *batch; // ivar: _batch
@property (nonatomic) BOOL reachedMinSplit; // ivar: _reachedMinSplit
@property (nonatomic) NSUInteger retryCount; // ivar: _retryCount
@property (nonatomic) BOOL wasFixed; // ivar: _wasFixed
@property (nonatomic) BOOL wasSplit; // ivar: _wasSplit


-(NSUInteger)count;
-(id)description;
-(id)init;
-(id)lastAddedRecord;
-(void)addRecord:(id)arg0 ;
-(void)incrementRetryCount;


@end


#endif