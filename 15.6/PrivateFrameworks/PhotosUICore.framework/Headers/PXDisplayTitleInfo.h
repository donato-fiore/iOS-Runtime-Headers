// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXDISPLAYTITLEINFO_H
#define PXDISPLAYTITLEINFO_H

@class PHAssetCollection, NSString;
@protocol PXPhotoLibraryUIChangeObserver;


#import "PXObservable.h"

@interface PXDisplayTitleInfo : PXObservable <PXPhotoLibraryUIChangeObserver>



@property (retain, nonatomic, setter=_setAssetCollection:) PHAssetCollection *_assetCollection; // ivar: __assetCollection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *fontName; // ivar: _fontName
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title
@property (nonatomic) BOOL useVerboseSmartDescription; // ivar: _useVerboseSmartDescription


+(id)displayTitleInfoForDetailsOfAssetCollection:(id)arg0 withTitleCategory:(NSInteger)arg1 defaultTitle:(id)arg2 defaultTitleCategory:(NSInteger)arg3 titleKey:(id)arg4 titleCategoryKey:(id)arg5 defaultSubtitle:(id)arg6 subtitleKey:(id)arg7 simulatedLoadingDelay:(CGFloat)arg8 preferredAttributesPromise:(id)arg9 ;
-(id)init;
-(id)initWithAssetCollection:(id)arg0 useVerboseSmartDescription:(BOOL)arg1 ;
-(id)initWithTitle:(id)arg0 subtitle:(id)arg1 fontName:(id)arg2 ;
-(id)mutableChangeObject;
-(void)_updatePropertiesFromAssetCollection;
-(void)performChanges:(id)arg0 ;
-(void)photoLibraryDidChangeOnMainQueue:(id)arg0 ;


@end


#endif