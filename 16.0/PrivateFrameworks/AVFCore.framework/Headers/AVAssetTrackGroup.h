// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVASSETTRACKGROUP_H
#define AVASSETTRACKGROUP_H

@class NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "AVAssetTrackGroupInternal.h"

@interface AVAssetTrackGroup : NSObject <NSCopying>

 {
    AVAssetTrackGroupInternal *_assetTrackGroup;
}


@property (readonly, nonatomic) NSArray *trackIDs;


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_assetComparisonToken;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithAsset:(id)arg0 trackIDs:(id)arg1 ;
-(void)dealloc;


@end


#endif