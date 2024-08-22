// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TVMEDIAITEM_H
#define TVMEDIAITEM_H

@class NSURL, NSString, NSNumber, NSArray, NSDictionary;
@protocol _TVSecureKeyLoading;

#import <Foundation/Foundation.h>


@interface TVMediaItem : NSObject

@property (retain, nonatomic) NSURL *artworkImageURL; // ivar: _artworkImageURL
@property (nonatomic) BOOL containsExplicitContent; // ivar: _containsExplicitContent
@property (nonatomic) CGFloat contentProposalAutomaticAcceptanceInterval; // ivar: _contentProposalAutomaticAcceptanceInterval
@property (nonatomic) CGFloat contentProposalPresentationTime; // ivar: _contentProposalPresentationTime
@property (copy, nonatomic) NSString *contentRating; // ivar: _contentRating
@property (retain, nonatomic) NSString *contentRatingDomain; // ivar: _contentRatingDomain
@property (retain, nonatomic) NSNumber *contentRatingRanking; // ivar: _contentRatingRanking
@property (copy, nonatomic) NSString *externalContentIdentifier; // ivar: _externalContentIdentifier
@property (copy, nonatomic) NSString *externalIdentifier; // ivar: _externalIdentifier
@property (copy, nonatomic) NSString *externalProfileIdentifier; // ivar: _externalProfileIdentifier
@property (copy, nonatomic) NSString *externalServiceIdentifier; // ivar: _externalServiceIdentifier
@property (retain, nonatomic) NSArray *highlightGroups; // ivar: _highlightGroups
@property (retain, nonatomic) NSArray *interstitials; // ivar: _interstitials
@property (retain, nonatomic) NSString *itemDescription; // ivar: _itemDescription
@property (copy, nonatomic) NSNumber *playbackProgress; // ivar: _playbackProgress
@property (nonatomic) CGFloat resumeTime; // ivar: _resumeTime
@property (retain, nonatomic) NSObject<_TVSecureKeyLoading> *secureKeyLoader; // ivar: _secureKeyLoader
@property (retain, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (retain, nonatomic) NSString *title; // ivar: _title
@property (retain, nonatomic) NSString *type; // ivar: _type
@property (retain, nonatomic) NSURL *url; // ivar: _url
@property (retain, nonatomic) NSDictionary *userInfo; // ivar: _userInfo




@end


#endif