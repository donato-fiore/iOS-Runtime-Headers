// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PSITOPASSETSRESULT_H
#define PSITOPASSETSRESULT_H

@class NSArray;
@protocol OS_dispatch_queue, PSITopAssetsResultDelegate;

#import <Foundation/Foundation.h>


@interface PSITopAssetsResult : NSObject {
    NSObject<OS_dispatch_queue> *_isolationQueue;
    NSArray *_assetUUIDs;
}


@property (retain, nonatomic) *__CFArray assetIds; // ivar: _assetIds
@property (readonly, nonatomic) NSUInteger assetMatchCount;
@property (readonly, nonatomic) NSArray *assetUUIDs;
@property (weak, nonatomic) NSObject<PSITopAssetsResultDelegate> *delegate; // ivar: _delegate


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(void)dealloc;
-(void)fetchAssetUUIDsWithCompletionHandler:(id)arg0 ;


@end


#endif