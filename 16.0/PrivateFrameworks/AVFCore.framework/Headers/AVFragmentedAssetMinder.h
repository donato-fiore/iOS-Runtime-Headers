// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVFRAGMENTEDASSETMINDER_H
#define AVFRAGMENTEDASSETMINDER_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "AVFragmentedAssetMinderInternal.h"

@interface AVFragmentedAssetMinder : NSObject {
    AVFragmentedAssetMinderInternal *_fragmentedAssetMinder;
}


@property (readonly, nonatomic) NSArray *assets;
@property (nonatomic) CGFloat mindingInterval;


+(id)fragmentedAssetMinderWithAsset:(id)arg0 mindingInterval:(CGFloat)arg1 ;
-(BOOL)_throwsWhenAlreadyMindedAssetIsAdded;
-(id)init;
-(id)initWithAsset:(id)arg0 mindingInterval:(CGFloat)arg1 ;
-(void)addFragmentedAsset:(id)arg0 ;
-(void)dealloc;
-(void)removeFragmentedAsset:(id)arg0 ;


@end


#endif