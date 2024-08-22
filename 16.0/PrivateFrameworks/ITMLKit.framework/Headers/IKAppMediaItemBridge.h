// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IKAPPMEDIAITEMBRIDGE_H
#define IKAPPMEDIAITEMBRIDGE_H

@class NSString, NSArray, NSNumber, NSDictionary;
@protocol IKAppMediaItem;

#import <Foundation/Foundation.h>

#import "IKAppContext.h"
#import "IKJSMediaItem.h"

@interface IKAppMediaItemBridge : NSObject

@property (readonly, weak, nonatomic) IKAppContext *appContext; // ivar: _appContext
@property (readonly, weak, nonatomic) NSObject<IKAppMediaItem> *appMediaItem; // ivar: _appMediaItem
@property (retain, nonatomic) NSString *artworkImageSrcset; // ivar: _artworkImageSrcset
@property (retain, nonatomic) NSString *artworkImageURL; // ivar: _artworkImageURL
@property (retain, nonatomic) NSArray *chapterGroups;
@property (nonatomic) CGFloat contentProposalAutomaticAcceptanceInterval;
@property (nonatomic) CGFloat contentProposalPresentationTime;
@property (retain, nonatomic) NSString *contentRatingDomain;
@property (retain, nonatomic) NSNumber *contentRatingRanking;
@property (retain, nonatomic) NSString *description;
@property (retain, nonatomic) NSString *externalID;
@property (retain, nonatomic) NSDictionary *extraMetadata;
@property (retain, nonatomic) NSArray *interstitials;
@property (nonatomic) BOOL isExplicit;
@property (readonly, weak, nonatomic) IKJSMediaItem *jsMediaItem; // ivar: _jsMediaItem
@property (retain, nonatomic) NSString *ratingBadge;
@property (retain, nonatomic) NSNumber *resumeTime;
@property (retain, nonatomic) NSString *subtitle;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *type;
@property (retain, nonatomic) NSString *url;


-(id)initWithAppContext:(id)arg0 jsMediaItem:(id)arg1 ;
-(void)_evaluateDelegateBlockSync:(id)arg0 ;
-(void)_resolveArtworkImageURL;
-(void)cleanup;
-(void)loadCertificateDataForURL:(id)arg0 withCallback:(id)arg1 ;
-(void)loadContentIdentifierDataForURL:(id)arg0 withCallback:(id)arg1 ;
-(void)loadKeyDataForURL:(id)arg0 keyRequestData:(id)arg1 withCallback:(id)arg2 ;
-(void)prepareForLoadingWithCallback:(id)arg0 ;


@end


#endif