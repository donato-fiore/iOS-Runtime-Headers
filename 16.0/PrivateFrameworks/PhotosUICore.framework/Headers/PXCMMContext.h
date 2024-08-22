// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXCMMCONTEXT_H
#define PXCMMCONTEXT_H

@class NSDictionary, NSDate, NSString, NSArray;
@protocol PXDisplayAsset, PXUIImageProvider;

#import <Foundation/Foundation.h>

#import "PXCMMActionManager.h"
#import "PXAssetsDataSourceManager.h"
#import "PXUIMediaProvider.h"
#import "PXRecipient.h"
#import "PXPeopleSuggestionsDataSourceManager.h"
#import "PXCMMSendBackSuggestionSource.h"

@interface PXCMMContext : NSObject

@property (readonly, nonatomic) PXCMMActionManager *actionManager;
@property (readonly, nonatomic) NSUInteger activityType; // ivar: _activityType
@property (copy, nonatomic) NSDictionary *assetPreparationOptions; // ivar: _assetPreparationOptions
@property (nonatomic) NSInteger count; // ivar: _count
@property (readonly, nonatomic) PXAssetsDataSourceManager *dataSourceManager; // ivar: _dataSourceManager
@property (retain, nonatomic) NSDate *endDate; // ivar: _endDate
@property (nonatomic) BOOL hideActionMenu; // ivar: _hideActionMenu
@property (readonly, nonatomic) PXUIMediaProvider *mediaProvider; // ivar: _mediaProvider
@property (nonatomic) NSUInteger numberOfReceivedAssets; // ivar: _numberOfReceivedAssets
@property (copy, nonatomic) NSString *originalTitle; // ivar: _originalTitle
@property (copy, nonatomic) PXRecipient *originatorRecipient; // ivar: _originatorRecipient
@property (retain, nonatomic) PXPeopleSuggestionsDataSourceManager *peopleSuggestionsDataSourceManager; // ivar: _peopleSuggestionsDataSourceManager
@property (retain, nonatomic) PXPeopleSuggestionsDataSourceManager *peopleSuggestionsPreviewDataSourceManager; // ivar: _peopleSuggestionsPreviewDataSourceManager
@property (nonatomic) NSInteger photosCount; // ivar: _photosCount
@property (retain, nonatomic) NSObject<PXDisplayAsset> *posterAsset; // ivar: _posterAsset
@property (retain, nonatomic) NSObject<PXUIImageProvider> *posterMediaProvider; // ivar: _posterMediaProvider
@property (nonatomic) CGFloat ppt_delay; // ivar: _ppt_delay
@property (nonatomic) BOOL ppt_presentComposeRecipientView; // ivar: _ppt_presentComposeRecipientView
@property (nonatomic) BOOL ppt_scrollComposeRecipientsView; // ivar: _ppt_scrollComposeRecipientsView
@property (copy, nonatomic) NSArray *recipients; // ivar: _recipients
@property (retain, nonatomic) PXCMMSendBackSuggestionSource *sendBackSuggestionSource; // ivar: _sendBackSuggestionSource
@property (nonatomic) NSUInteger sourceType; // ivar: _sourceType
@property (retain, nonatomic) NSDate *startDate; // ivar: _startDate
@property (copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (nonatomic) NSInteger videosCount; // ivar: _videosCount


+(id)new;
-(id)createSession;
-(id)init;
-(id)initWithAssetsDataSourceManager:(id)arg0 mediaProvider:(id)arg1 activityType:(NSUInteger)arg2 ;


@end


#endif