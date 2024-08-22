// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VUIPREFLIGHTMANAGER_H
#define VUIPREFLIGHTMANAGER_H

@protocol TVPMediaItem, VUIControllerPresenter;

#import <Foundation/Foundation.h>

#import "VUIExtrasInfo.h"
#import "VUIMediaEntity.h"
#import "VUIVideosPlayable.h"

@interface VUIPreflightManager : NSObject

@property (nonatomic) BOOL contentAllowsCellularDownload; // ivar: _contentAllowsCellularDownload
@property (retain, nonatomic) VUIExtrasInfo *extrasInfo; // ivar: _extrasInfo
@property (retain, nonatomic) VUIMediaEntity *mediaEntity; // ivar: _mediaEntity
@property (retain, nonatomic) NSObject<TVPMediaItem> *mediaItem; // ivar: _mediaItem
@property (retain, nonatomic) NSObject<VUIControllerPresenter> *presentingController; // ivar: _presentingController
@property (nonatomic) NSUInteger restrictionsCheckType; // ivar: _restrictionsCheckType
@property (nonatomic) NSInteger restrictionsState; // ivar: _restrictionsState
@property (retain, nonatomic) id *restrictionsValidationToken; // ivar: _restrictionsValidationToken
@property (copy, nonatomic) id *savedRestrictionsCompletion; // ivar: _savedRestrictionsCompletion
@property (retain, nonatomic) VUIVideosPlayable *videosPlayable; // ivar: _videosPlayable


+(id)defaultPreflightManager;
-(BOOL)_isAllowedToPlayOrPurchase;
-(BOOL)_isTrailer;
-(BOOL)_shouldShowAgeConfirmationAlert;
-(NSInteger)_lastConfirmedAge;
-(NSInteger)_requiredAgeForPlayback;
-(id)_lastAgeConfirmationPrompted;
-(id)_ratingDomain;
-(id)_ratingValue;
-(id)init;
-(void)_logRatingsInfo:(id)arg0 maxAllowedRank:(id)arg1 ratingValue:(id)arg2 ;
-(void)_performAgeGateVerificationWithCompletion:(id)arg0 ;
-(void)_performRestrictionsCheckWithCompletion:(id)arg0 ;
-(void)_preflightDownloadWithCompletion:(id)arg0 ;
-(void)_preflightWithOptions:(NSInteger)arg0 userInfo:(id)arg1 completion:(id)arg2 ;
-(void)_setLastAgeConfirmationPrompted:(id)arg0 ;
-(void)_setLastConfirmedAge:(NSInteger)arg0 ;
-(void)_showAgeConfirmationWithPresentingViewController:(id)arg0 completion:(id)arg1 ;
-(void)_showRestrictionsAlertForRatingDomain:(id)arg0 completion:(id)arg1 ;
-(void)preflightWithOptions:(NSInteger)arg0 completion:(id)arg1 ;


@end


#endif