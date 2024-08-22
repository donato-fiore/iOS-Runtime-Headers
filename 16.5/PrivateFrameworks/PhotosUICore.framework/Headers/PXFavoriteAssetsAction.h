// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXFAVORITEASSETSACTION_H
#define PXFAVORITEASSETSACTION_H



#import "PXAssetsAction.h"

@interface PXFavoriteAssetsAction : PXAssetsAction

@property (readonly, nonatomic, getter=isFavorite) BOOL favorite; // ivar: _favorite


+(BOOL)canPerformOnAsset:(id)arg0 inAssetCollection:(id)arg1 ;
+(BOOL)currentValueForAssets:(id)arg0 ;
+(BOOL)toggledValueForAssets:(id)arg0 ;
-(id)actionIdentifier;
-(id)actionNameLocalizationKey;
-(id)initWithAssets:(id)arg0 ;
-(id)initWithAssets:(id)arg0 favorite:(BOOL)arg1 ;
-(void)performAction:(id)arg0 ;
-(void)performUndo:(id)arg0 ;


@end


#endif