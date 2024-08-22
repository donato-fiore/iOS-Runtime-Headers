// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IKJSMEDIAITEM_H
#define IKJSMEDIAITEM_H

@class NSString, NSNumber, NSArray, NSDictionary;
@protocol IKJSMediaItem;


#import "IKJSObject.h"
#import "IKAppMediaItemBridge.h"

@interface IKJSMediaItem : IKJSObject <IKJSMediaItem>



@property (retain, nonatomic) NSString *artworkImageSrcset;
@property (retain, nonatomic) NSString *artworkImageURL;
@property (readonly, nonatomic) IKAppMediaItemBridge *bridge; // ivar: _bridge
@property (retain, nonatomic) NSString *contentRatingDomain;
@property (retain, nonatomic) NSNumber *contentRatingRanking;
@property (retain, nonatomic) NSString *description;
@property (retain, nonatomic) NSString *externalID;
@property (retain, nonatomic) NSArray *highlightGroups;
@property (retain, nonatomic) NSArray *interstitials;
@property (nonatomic) BOOL isExplicit;
@property (retain, nonatomic) NSDictionary *metadata;
@property (retain, nonatomic) NSNumber *resumeTime; // ivar: _resumeTime
@property (retain, nonatomic) NSString *subtitle;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *type;
@property (retain, nonatomic) NSString *url;


-(CGFloat)contentProposalAutomaticAcceptanceInterval;
-(CGFloat)contentProposalPresentationTime;
-(id)initWithType:(id)arg0 ;
-(id)ratingBadge;
-(void)dealloc;
-(void)loadCertificateDataForURI:(id)arg0 withCallback:(id)arg1 ;
-(void)loadContentIdentifierDataForURI:(id)arg0 withCallback:(id)arg1 ;
-(void)loadKeyDataForURI:(id)arg0 requestData:(id)arg1 withCallback:(id)arg2 ;
-(void)setContentProposalAutomaticAcceptanceInterval:(CGFloat)arg0 ;
-(void)setContentProposalPresentationTime:(CGFloat)arg0 ;
-(void)setRatingBadge:(id)arg0 ;


@end


#endif