// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PHBATCHASSETEXPUNGER_H
#define PHBATCHASSETEXPUNGER_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "PHAssetDeleteOptions.h"
#import "PHBatchPerformChanges.h"

@interface PHBatchAssetExpunger : NSObject {
    NSArray *_assets;
    PHAssetDeleteOptions *_deleteOptions;
    PHBatchPerformChanges *_batchPerformChanges;
}




+(id)batchAssetExpungerWithAssets:(id)arg0 deleteOptions:(id)arg1 library:(id)arg2 topLevelSelector:(SEL)arg3 ;
-(BOOL)performChangesAndWait:(*id)arg0 ;
-(id)initWithAssets:(id)arg0 deleteOptions:(id)arg1 library:(id)arg2 batchSize:(NSUInteger)arg3 ;
-(void)_batchExpungeInRange:(struct _NSRange )arg0 ;
-(void)performChangesWithCompletionHandler:(id)arg0 ;


@end


#endif