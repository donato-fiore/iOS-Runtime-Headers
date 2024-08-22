// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSHAREDLIBRARYASSETSTATUSPROVIDER_H
#define PXSHAREDLIBRARYASSETSTATUSPROVIDER_H

@class PHPhotoLibrary, PHAsset, NSString;
@protocol PXPhotoLibraryUIChangeObserver, PXChangeObserver;


#import "PXObservable.h"

@interface PXSharedLibraryAssetStatusProvider : PXObservable <PXPhotoLibraryUIChangeObserver, PXChangeObserver>

 {
    PHPhotoLibrary *_photoLibrary;
    BOOL _hasSharedLibraryOrPreviewOverride;
}


@property (retain, nonatomic) PHAsset *asset; // ivar: _asset
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasSharedLibraryOrPreview; // ivar: _hasSharedLibraryOrPreview
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *localizedContributionStatus; // ivar: _localizedContributionStatus
@property (nonatomic) NSUInteger status; // ivar: _status
@property (readonly) Class superclass;


+(id)_appendMediaTypeForStatusStringFormat:(id)arg0 mediaType:(NSInteger)arg1 ;
+(id)_applyAttributesToTitle:(id)arg0 ;
+(id)_displayNameFont;
+(id)_libraryNameFont;
+(id)_localizedContributionStatusForContributor:(id)arg0 status:(NSUInteger)arg1 assetMediaType:(NSInteger)arg2 ;
+(id)_primaryFont;
+(id)localizedContributionStatusStringForParticipants:(id)arg0 assetMediaType:(NSInteger)arg1 showOnlyOneNameToShortenStatus:(BOOL)arg2 ;
-(id)attributedLocalizedContributionStatusForPreferredWidth:(CGFloat)arg0 maximumNumberOfLines:(CGFloat)arg1 ;
-(id)fetchParticipants;
-(id)init;
-(id)initForTestingAssumingSharedLibraryOrPreviewExists;
-(id)prepareForPhotoLibraryChange:(id)arg0 ;
-(void)_setPhotoLibrary:(id)arg0 ;
-(void)_updateProperties;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)photoLibraryDidChangeOnMainQueue:(id)arg0 withPreparedInfo:(id)arg1 ;


@end


#endif