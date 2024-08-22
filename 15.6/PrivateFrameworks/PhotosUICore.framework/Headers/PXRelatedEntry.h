// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXRELATEDENTRY_H
#define PXRELATEDENTRY_H

@class PHAssetCollection, NSString, PHFetchResult, PHObject;
@protocol PXRelatedEntry;

#import <Foundation/Foundation.h>


@interface PXRelatedEntry : NSObject <PXRelatedEntry>



@property (readonly, nonatomic) PHAssetCollection *assetCollection; // ivar: _assetCollection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PHFetchResult *keyAssetFetchResult; // ivar: _keyAssetFetchResult
@property (readonly, nonatomic, getter=isPlaceholder) BOOL placeholder;
@property (readonly, nonatomic) PHObject *referenceObject; // ivar: _referenceObject
@property (readonly, nonatomic) PHAssetCollection *relatedAssetCollection;
@property (readonly, nonatomic) PHFetchResult *relatedKeyAssetFetchResult;
@property (readonly, nonatomic) NSString *relatedLocalizedSubtitle;
@property (retain, nonatomic) NSString *relatedLocalizedTitle; // ivar: _relatedLocalizedTitle
@property (readonly, nonatomic) PHObject *relatedReferenceObject;
@property (readonly, nonatomic) NSString *relatedTitleFontName; // ivar: _relatedTitleFontName
@property (readonly) Class superclass;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithAssetCollection:(id)arg0 keyAssetFetchResult:(id)arg1 referenceObject:(id)arg2 ;


@end


#endif