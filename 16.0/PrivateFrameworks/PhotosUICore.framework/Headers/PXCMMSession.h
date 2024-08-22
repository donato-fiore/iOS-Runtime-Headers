// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXCMMSESSION_H
#define PXCMMSESSION_H

@class NSString, NSDictionary, NSSet;
@protocol PXTapToRadar, PXAssetImportStatusManager;

#import <Foundation/Foundation.h>

#import "PXCMMActionManager.h"
#import "PXAssetsDataSourceManager.h"
#import "PXUIMediaProvider.h"
#import "PXMomentShareStatus.h"
#import "PXPeopleSuggestionsDataSourceManager.h"
#import "PXCMMSendBackSuggestionSource.h"
#import "PXCMMViewModel.h"

@interface PXCMMSession : NSObject <PXTapToRadar>



@property (readonly, nonatomic) PXCMMActionManager *actionManager; // ivar: _actionManager
@property (readonly, nonatomic) NSUInteger activityType; // ivar: _activityType
@property (readonly, nonatomic) PXAssetsDataSourceManager *dataSourceManager; // ivar: _dataSourceManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *diagnosticDictionary;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL hideActionMenu; // ivar: _hideActionMenu
@property (readonly, nonatomic) NSString *importSessionID; // ivar: _importSessionID
@property (readonly, nonatomic) NSObject<PXAssetImportStatusManager> *importStatusManager;
@property (readonly, nonatomic) PXUIMediaProvider *mediaProvider; // ivar: _mediaProvider
@property (readonly, nonatomic) PXMomentShareStatus *momentShareStatus; // ivar: _momentShareStatus
@property (readonly, nonatomic) NSSet *notificationSuppressionContexts;
@property (readonly, nonatomic) PXPeopleSuggestionsDataSourceManager *peopleSuggestionsDataSourceManager; // ivar: _peopleSuggestionsDataSourceManager
@property (readonly, nonatomic) PXPeopleSuggestionsDataSourceManager *peopleSuggestionsPreviewDataSourceManager; // ivar: _peopleSuggestionsPreviewDataSourceManager
@property (nonatomic) CGFloat ppt_delay; // ivar: _ppt_delay
@property (readonly, nonatomic) BOOL ppt_presentComposeRecipientView; // ivar: _ppt_presentComposeRecipientView
@property (readonly, nonatomic) BOOL ppt_scrollComposeRecipientsView; // ivar: _ppt_scrollComposeRecipientsView
@property (readonly, nonatomic) NSDictionary *preparationOptionsPerAsset; // ivar: _preparationOptionsPerAsset
@property (readonly, nonatomic) PXCMMSendBackSuggestionSource *sendBackSuggestionSource; // ivar: _sendBackSuggestionSource
@property (readonly, nonatomic) NSUInteger sourceType; // ivar: _sourceType
@property (readonly) Class superclass;
@property (readonly, nonatomic) PXCMMViewModel *viewModel; // ivar: _viewModel


+(id)new;
-(id)init;
-(id)initWithContext:(id)arg0 ;
-(id)momentShareStatusPresentationWithPresentationStyle:(NSInteger)arg0 ;


@end


#endif