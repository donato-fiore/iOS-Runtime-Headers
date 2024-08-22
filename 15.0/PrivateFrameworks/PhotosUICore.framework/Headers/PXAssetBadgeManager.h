// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXASSETBADGEMANAGER_H
#define PXASSETBADGEMANAGER_H


#import <Foundation/Foundation.h>


@interface PXAssetBadgeManager : NSObject



+(id)defaultManager;
-(struct PXAssetBadgeInfo )badgeInfoForAsset:(id)arg0 inCollection:(id)arg1 options:(NSUInteger)arg2 ;
-(struct PXAssetBadgeInfo )badgeInfoForCollection:(id)arg0 options:(NSUInteger)arg1 ;


@end


#endif