// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXASSETLOCATIONACTION_H
#define PXASSETLOCATIONACTION_H

@class NSDictionary, NSString;


#import "PXAssetsAction.h"

@interface PXAssetLocationAction : PXAssetsAction {
    NSDictionary *_originalLocations;
}


@property (readonly, nonatomic) NSString *analyticsActionString; // ivar: _analyticsActionString
@property (readonly, nonatomic) NSString *analyticsPlaceLevelString; // ivar: _analyticsPlaceLevelString
@property (copy, nonatomic) id *onUnitChange; // ivar: _onUnitChange


+(BOOL)canPerformOnAsset:(id)arg0 inAssetCollection:(id)arg1 ;
-(id)_undoLocationForAsset:(id)arg0 ;
-(id)locationForAsset:(id)arg0 shifted:(*BOOL)arg1 ;
-(void)_loadOriginalLocationsIfNeeded;
// -(void)_performChangesWithLocationProvider:(id)arg0 completionHandler:(unk)arg1  ;
-(void)_requestRevGeocoding;
-(void)_sendAnalyticsEvent;
-(void)performAction:(id)arg0 ;
-(void)performUndo:(id)arg0 ;


@end


#endif