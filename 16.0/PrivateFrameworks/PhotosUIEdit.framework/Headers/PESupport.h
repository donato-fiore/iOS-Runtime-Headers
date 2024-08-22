// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PESUPPORT_H
#define PESUPPORT_H


#import <Foundation/Foundation.h>


@interface PESupport : NSObject



+(BOOL)assetHasUnsupportedOriginalAdjustments:(id)arg0 ;
+(BOOL)canPerformEditOnAsset:(id)arg0 ;
+(BOOL)photoWasTakenWithoutFlashWithImageProperties:(id)arg0 ;
+(id)originalAdjustmentVersionForAsset:(id)arg0 ;
+(id)repairedAsShotCompositionController:(id)arg0 forCurrentCompositionController:(id)arg1 ;
+(void)syncMainThread:(id)arg0 ;


@end


#endif