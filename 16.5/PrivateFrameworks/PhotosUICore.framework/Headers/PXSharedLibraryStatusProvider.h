// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSHAREDLIBRARYSTATUSPROVIDER_H
#define PXSHAREDLIBRARYSTATUSPROVIDER_H

@class NSString;
@protocol PXMutableSharedLibraryStatusProvider, PXSectionedDataSourceManagerObserver, PXSettingsKeyObserver, PXSharedLibrary;


#import "PXObservable.h"
#import "PXSharedLibraryDataSourceManager.h"

@interface PXSharedLibraryStatusProvider : PXObservable <PXMutableSharedLibraryStatusProvider, PXSectionedDataSourceManagerObserver, PXSettingsKeyObserver>

 {
    PXSharedLibraryDataSourceManager *_invitationsDataSourceManager;
    PXSharedLibraryDataSourceManager *_previewDataSourceManager;
    PXSharedLibraryDataSourceManager *_sharedLibraryDataSourceManager;
    PXSharedLibraryDataSourceManager *_exitingDataSourceManager;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<PXSharedLibrary> *exiting; // ivar: _exiting
@property (readonly, nonatomic) BOOL hasPreview; // ivar: _hasPreview
@property (readonly, nonatomic) BOOL hasSharedLibrary; // ivar: _hasSharedLibrary
@property (readonly, nonatomic) BOOL hasSharedLibraryOrPreview;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<PXSharedLibrary> *invitation; // ivar: _invitation
@property (readonly, nonatomic) NSObject<PXSharedLibrary> *preview; // ivar: _preview
@property (readonly, nonatomic) NSObject<PXSharedLibrary> *sharedLibrary; // ivar: _sharedLibrary
@property (readonly, nonatomic) NSObject<PXSharedLibrary> *sharedLibraryOrPreview;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)_statusDescription;
-(id)fetchExiting;
-(id)fetchPreview;
-(id)fetchSharedLibrary;
-(id)init;
-(void)_configureExitingDataSourceManager;
-(void)_configureInvitationDataSourceManager;
-(void)_configurePreviewDataSourceManager;
-(void)_configureSharedLibraryDataSourceManager;
-(void)_updateExiting;
-(void)_updateInvitation;
-(void)_updatePreview;
-(void)_updateSharedLibrary;
-(void)fetchSharedLibraryForURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)settings:(id)arg0 changedValueForKey:(id)arg1 ;


@end


#endif