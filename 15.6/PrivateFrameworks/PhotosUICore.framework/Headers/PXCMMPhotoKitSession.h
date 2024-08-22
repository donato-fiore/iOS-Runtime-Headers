// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXCMMPHOTOKITSESSION_H
#define PXCMMPHOTOKITSESSION_H

@class NSString, PHAsset, PHMomentShare, PHSuggestion;


#import "PXCMMSession.h"
#import "PXPhotoKitImportStatusManager.h"
#import "PXPhotoKitMomentShareStatus.h"
#import "PXPhotoKitAssetsDataSourceManager.h"

@interface PXCMMPhotoKitSession : PXCMMSession {
    PXPhotoKitImportStatusManager *_importStatusManager;
    PXPhotoKitMomentShareStatus *_photoKitMomentShareStatus;
    NSString *_photoKitImportSessionID;
}


@property (weak, nonatomic) PHAsset *anchorAsset; // ivar: _anchorAsset
@property (readonly, nonatomic) PXPhotoKitAssetsDataSourceManager *dataSourceManager;
@property (readonly, nonatomic) PHMomentShare *momentShare; // ivar: _momentShare
@property (readonly, nonatomic) PHMomentShare *originatingMomentShare; // ivar: _originatingMomentShare
@property (readonly, nonatomic) PHSuggestion *suggestion; // ivar: _suggestion


-(id)description;
-(id)diagnosticDictionary;
-(id)importSessionID;
-(id)importStatusManager;
-(id)initWithContext:(id)arg0 ;
-(id)initWithPhotoKitContext:(id)arg0 ;
-(id)notificationSuppressionContexts;


@end


#endif