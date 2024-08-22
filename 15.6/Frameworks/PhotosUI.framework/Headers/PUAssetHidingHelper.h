// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUASSETHIDINGHELPER_H
#define PUASSETHIDINGHELPER_H

@class PHManualFetchResult, NSArray, NSString;
@protocol PXPhotoLibraryUIChangeObserver;

#import <Foundation/Foundation.h>


@interface PUAssetHidingHelper : NSObject <PXPhotoLibraryUIChangeObserver>

 {
    BOOL _areAllAssetsHidden;
    BOOL _didCheckAllAssetHidden;
    BOOL _canToggleAssetsVisibility;
    BOOL _didCheckCanToggleAssetsVisibility;
}


@property (retain, nonatomic, setter=_setAssetsFetchResult:) PHManualFetchResult *_assetsFetchResults; // ivar: __assetsFetchResults
@property (copy, nonatomic) NSArray *assets; // ivar: _assets
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isHiding;
@property (readonly) Class superclass;


-(BOOL)_areAllAssetsHidden;
-(BOOL)canToggleAssetsVisibility;
-(id)alertControllerForTogglingAssetsVisibilityWithCompletionHandler:(id)arg0 ;
-(id)attemptTogglingAssetsVisibilityFromViewController:(id)arg0 sourceView:(id)arg1 sourceRect:(struct CGRect )arg2 completionHandler:(id)arg3 ;
-(id)menuItemTitleForTogglingAssetsVisibility;
-(void)_prepareAssetsVisibilityValueIfNeeded;
-(void)applyHiddenState:(BOOL)arg0 completionHandler:(id)arg1 ;


@end


#endif