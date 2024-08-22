// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXCMMMOMENTSHAREINVITATION_H
#define PXCMMMOMENTSHAREINVITATION_H

@class NSDate, NSString, PHMomentShare, PHFetchResult;
@protocol PXMediaTypeAggregating, PXCMMInvitation, NSCopying, PXDisplayAssetCollection, PXCMMInvitationParticipant, PXDisplayAsset, PXUIImageProvider;

#import <Foundation/Foundation.h>

#import "PXAssetCollectionActionManager.h"

@interface PXCMMMomentShareInvitation : NSObject <PXMediaTypeAggregating, PXCMMInvitation, NSCopying>



@property (readonly, nonatomic) NSInteger aggregateMediaType;
@property (readonly, nonatomic) NSInteger aggregateMediaType;
@property (readonly, nonatomic) NSObject<PXDisplayAssetCollection> *assetCollection;
@property (readonly, nonatomic) PXAssetCollectionActionManager *assetCollectionActionManager;
@property (readonly, nonatomic) NSUInteger count;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDate *expiryDate;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) PHMomentShare *momentShare; // ivar: _momentShare
@property (readonly, nonatomic) NSObject<PXCMMInvitationParticipant> *owner; // ivar: _owner
@property (readonly, nonatomic) PHFetchResult *participantsFetchResult; // ivar: _participantsFetchResult
@property (readonly, nonatomic) NSObject<PXDisplayAsset> *posterAsset; // ivar: _posterAsset
@property (readonly, nonatomic) NSObject<PXUIImageProvider> *posterMediaProvider; // ivar: _posterMediaProvider
@property (readonly, nonatomic) PHFetchResult *previewAssetsFetchResult; // ivar: _previewAssetsFetchResult
@property (readonly, nonatomic) NSInteger shareType; // ivar: _shareType
@property (readonly, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *title; // ivar: _title


+(id)invitationWithMomentShare:(id)arg0 ;
+(id)new;
-(id)contextForActivityType:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithMomentShare:(id)arg0 ;
-(id)invitationWithUpdatedParticipantsFetchResult:(id)arg0 ;
-(id)invitationWithUpdatedPreviewAssetsFetchResult:(id)arg0 ;
-(void)acceptWithCompletionHandler:(id)arg0 ;


@end


#endif