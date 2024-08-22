// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXCHANGEASSETLOCATIONACTION_H
#define PXCHANGEASSETLOCATIONACTION_H

@class CLLocation;


#import "PXAssetLocationAction.h"
#import "PXAnnotatedLocation.h"

@interface PXChangeAssetLocationAction : PXAssetLocationAction {
    CLLocation *_preciseLocation;
    BOOL _shifted;
}


@property (readonly, nonatomic) PXAnnotatedLocation *annotatedLocation; // ivar: _annotatedLocation
@property (readonly, nonatomic) NSInteger sourceType; // ivar: _sourceType


-(id)actionIdentifier;
-(id)actionNameLocalizationKey;
-(id)analyticsActionString;
-(id)analyticsPlaceLevelString;
-(id)initWithAssets:(id)arg0 annotatedLocation:(id)arg1 sourceType:(NSInteger)arg2 ;
-(id)locationForAsset:(id)arg0 shifted:(*BOOL)arg1 ;


@end


#endif