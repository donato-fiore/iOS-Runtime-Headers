// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATDETAILEDREQUESTINFOFORASSETTYPE_H
#define ATDETAILEDREQUESTINFOFORASSETTYPE_H

@class NSMutableDictionary, NSDictionary;

#import <Foundation/Foundation.h>


@interface ATDetailedRequestInfoForAssetType : NSObject {
    NSMutableDictionary *_mutableContributors;
}


@property (readonly, nonatomic, getter=getContributors) NSDictionary *contributors;
@property (readonly, nonatomic, getter=getTotalAssetsToSync) NSUInteger totalAssetsToSync; // ivar: _totalAssetsToSync
@property (readonly, nonatomic, getter=getTotalBytesSynced) NSUInteger totalBytesSynced; // ivar: _totalBytesSynced
@property (readonly, nonatomic, getter=getTotalBytesToSync) NSUInteger totalBytesToSync; // ivar: _totalBytesToSync


+(id)serializedRequestInfoFromATDetailedRequestInfoForAssetType:(id)arg0 ;
-(id)description;
-(id)init;
-(void)incrementAssetCountToSync;
-(void)updateBytesSynced:(NSUInteger)arg0 ;
-(void)updateBytesToSync:(NSUInteger)arg0 forItemIdentifier:(id)arg1 ;


@end


#endif