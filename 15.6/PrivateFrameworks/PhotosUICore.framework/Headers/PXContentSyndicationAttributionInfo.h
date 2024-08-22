// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXCONTENTSYNDICATIONATTRIBUTIONINFO_H
#define PXCONTENTSYNDICATIONATTRIBUTIONINFO_H

@class PHAsset, NSString, CNContact, SLHighlight, NSAttributedString, UIImage;
@protocol PXContentSyndicationAttributionInfoChangeDelegate;

#import <Foundation/Foundation.h>

#import "PXContentSyndicationPhotoKitSocialLayerHighlightProvider.h"

@interface PXContentSyndicationAttributionInfo : NSObject

@property (retain, nonatomic) PHAsset *asset; // ivar: _asset
@property (copy, nonatomic) NSString *axDescriptionForSyndicationContactImage; // ivar: _axDescriptionForSyndicationContactImage
@property (readonly, copy, nonatomic) NSString *axDescriptionForSyndicationLoadingIndicator; // ivar: _axDescriptionForSyndicationLoadingIndicator
@property (copy, nonatomic) NSString *axDescriptionForSyndicationReplyButton; // ivar: _axDescriptionForSyndicationReplyButton
@property (weak, nonatomic) NSObject<PXContentSyndicationAttributionInfoChangeDelegate> *changeDelegate; // ivar: _changeDelegate
@property (retain, nonatomic) CNContact *contact; // ivar: _contact
@property (nonatomic) BOOL hasSyndicationAttributionInfo; // ivar: _hasSyndicationAttributionInfo
@property (retain, nonatomic) SLHighlight *highlight; // ivar: _highlight
@property (retain, nonatomic) PXContentSyndicationPhotoKitSocialLayerHighlightProvider *highlightProvider; // ivar: _highlightProvider
@property (copy, nonatomic) NSString *receivingGroupDisplayName; // ivar: _receivingGroupDisplayName
@property (copy, nonatomic) NSAttributedString *savedFromTitle; // ivar: _savedFromTitle
@property (copy, nonatomic) NSString *senderAppName; // ivar: _senderAppName
@property (retain, nonatomic) UIImage *senderThumbnailImage; // ivar: _senderThumbnailImage
@property (retain, nonatomic) NSString *syndicationAttributionIdentifier; // ivar: _syndicationAttributionIdentifier
@property (nonatomic) BOOL syndicationAttributionInfoIsLoading; // ivar: _syndicationAttributionInfoIsLoading
@property (copy, nonatomic) NSString *syndicationSenderDisplayName; // ivar: _syndicationSenderDisplayName
@property (copy, nonatomic) NSString *syndicationSharedWithTitle; // ivar: _syndicationSharedWithTitle


+(id)_nameStringForContact:(id)arg0 ;
+(id)_sharedContactFetchSerialQueue;
+(id)appIconFetchQueue;
-(id)_sfaAttributes;
-(id)initWithAsset:(id)arg0 ;
-(void)_contactChangeDidOccur:(id)arg0 ;
-(void)_fetchContactWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)_handleAttributionChanges;
-(void)_handleContactFetchCompletion:(id)arg0 error:(id)arg1 oldSyndicationSenderDisplayName:(id)arg2 oldSyndicationSharedWithTitle:(id)arg3 oldImageData:(id)arg4 ;
-(void)_invalidateAttributedStrings;
-(void)_updateAppNameColorForAttributedString:(id)arg0 ;
-(void)contentSizeCategoryDidChangeNotification:(id)arg0 ;
-(void)createSyndicatedAppIconWithSize:(struct CGSize )arg0 scale:(CGFloat)arg1 completion:(id)arg2 ;
-(void)fetchAppIconThumbnailImageWithCompletion:(id)arg0 ;


@end


#endif