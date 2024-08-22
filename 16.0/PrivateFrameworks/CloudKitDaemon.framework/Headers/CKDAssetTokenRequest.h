// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDASSETTOKENREQUEST_H
#define CKDASSETTOKENREQUEST_H

@class NSMutableArray, NSMutableSet;

#import <Foundation/Foundation.h>


@interface CKDAssetTokenRequest : NSObject

@property (retain, nonatomic) NSMutableArray *assetBatches; // ivar: _assetBatches
@property (retain, nonatomic) NSMutableSet *failedAssetBatches; // ivar: _failedAssetBatches
@property (nonatomic) unsigned int size; // ivar: _size
@property (nonatomic) unsigned int sizeUpperBound; // ivar: _sizeUpperBound


-(BOOL)hasSuccessfulBatches;
-(BOOL)isEmpty;
-(id)CKPropertiesDescription;
-(id)description;
-(id)init;
-(id)successfulBatches;
-(void)addAssetBatch:(id)arg0 ;
-(void)addFailedBatch:(id)arg0 ;


@end


#endif