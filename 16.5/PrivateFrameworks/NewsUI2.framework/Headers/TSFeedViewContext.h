// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSFEEDVIEWCONTEXT_H
#define TSFEEDVIEWCONTEXT_H

@class NSString, NSNumber, NSURL;

#import <Foundation/Foundation.h>

#import "TSAnalyticsReferral.h"

@interface TSFeedViewContext : NSObject {
    ? feedTagType;
    ? openedFromNews;
    ? previousArticleID;
    ? sourceURL;
    ? title;
    ? tagName;
    ? sourceApplication;
    ? userActivityType;
    ? sourceSearchText;
    ? adPreviewID;
    ? adPreviewSessionID;
    ? adQToken;
}


@property (nonatomic, copy) NSString *adPreviewID;
@property (nonatomic, copy) NSString *adPreviewSessionID;
@property (nonatomic, copy) NSString *adQToken;
@property (nonatomic, retain) NSNumber *displayRank; // ivar: displayRank
@property (nonatomic, retain) NSNumber *externalAnalyticsFeedReferrer; // ivar: externalAnalyticsFeedReferrer
@property (nonatomic, retain) NSNumber *feedPickerSection; // ivar: feedPickerSection
@property (nonatomic, retain) NSNumber *feedPickerType; // ivar: feedPickerType
@property (nonatomic, retain) NSNumber *maximumAdRequestsForCurrentAdPreviewID; // ivar: maximumAdRequestsForCurrentAdPreviewID
@property (nonatomic, retain) NSNumber *presentationReason; // ivar: presentationReason
@property (nonatomic, copy) NSString *previousArticleID;
@property (nonatomic, retain) NSNumber *previousArticleVersion; // ivar: previousArticleVersion
@property (nonatomic, retain) TSAnalyticsReferral *referral; // ivar: referral
@property (nonatomic) BOOL showSubscribedAlert; // ivar: showSubscribedAlert
@property (nonatomic, copy) NSString *sourceApplication;
@property (nonatomic, copy) NSString *sourceSearchText;
@property (nonatomic, copy) NSURL *sourceURL;
@property (nonatomic, copy) NSString *tagName;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *userActivityType;


-(id)init;
-(void)setFeedTagType:(NSUInteger)arg0 ;
-(void)setWithAdPreviewID:(id)arg0 ;
-(void)setWithAdPreviewSessionID:(id)arg0 ;
-(void)setWithAdQToken:(id)arg0 ;
-(void)setWithDisplayRank:(NSInteger)arg0 ;
-(void)setWithExternalAnalyticsFeedReferrer:(NSInteger)arg0 ;
-(void)setWithFeedPickerSection:(int)arg0 ;
-(void)setWithFeedPickerType:(int)arg0 ;
-(void)setWithMaximumAdRequestsForCurrentAdPreviewID:(NSInteger)arg0 ;
-(void)setWithPresentationReason:(int)arg0 ;
-(void)setWithPreviousArticleID:(id)arg0 ;
-(void)setWithPreviousArticleVersion:(NSInteger)arg0 ;
-(void)setWithReferral:(id)arg0 ;
-(void)setWithShowSubscribedAlert:(BOOL)arg0 ;
-(void)setWithSourceApplication:(id)arg0 ;
-(void)setWithSourceSearchText:(id)arg0 ;
-(void)setWithSourceURL:(id)arg0 ;
-(void)setWithUserActivityType:(id)arg0 ;


@end


#endif