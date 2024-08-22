// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUWARNINGHELPER_H
#define PUWARNINGHELPER_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface PUWarningHelper : NSObject

@property (retain, nonatomic, setter=_setAssets:) NSArray *_assets; // ivar: __assets


+(id)_suffix:(id)arg0 ;
// +(id)alertControllerForAssets:(id)arg0 inCollection:(id)arg1 cancelAction:(id)arg2 removeTitle:(unk)arg3 removeAction:(id)arg4 deleteAction:(id)arg5  ;
+(id)getCombinedRemovalDeletionWarningMessageForAssets:(id)arg0 ;
+(id)getRemovalWarningMessageForAssets:(id)arg0 ;
+(void)getAssetTypeCountsForAssets:(id)arg0 photosCount:(*NSInteger)arg1 videosCount:(*NSInteger)arg2 othersCount:(*NSInteger)arg3 ;


@end


#endif