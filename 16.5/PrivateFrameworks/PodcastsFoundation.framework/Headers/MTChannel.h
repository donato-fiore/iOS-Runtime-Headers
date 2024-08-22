// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTCHANNEL_H
#define MTCHANNEL_H

@class NSManagedObject, NSString, NSSet;



@interface MTChannel : NSManagedObject

@property (retain, nonatomic) NSString *artworkURL;
@property (nonatomic) NSInteger availableShowCount;
@property (retain, nonatomic) NSString *backgroundColor;
@property (retain, nonatomic) NSString *displayType;
@property (readonly, nonatomic) NSInteger followedShowCount;
@property (readonly, nonatomic) BOOL isMultiShow;
@property (readonly, nonatomic) BOOL isSingleShow;
@property (nonatomic) CGFloat lastPersonalizedRequestDate;
@property (nonatomic) float logoImageHeight;
@property (retain, nonatomic) NSString *logoImageURL;
@property (nonatomic) float logoImageWidth;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSSet *podcastUuids;
@property (retain, nonatomic) NSSet *podcasts;
@property (readonly, nonatomic) NSInteger resolvedShowCount;
@property (nonatomic) NSInteger showCount;
@property (nonatomic) NSInteger storeId;
@property (nonatomic) BOOL subscriptionActive;
@property (nonatomic) CGFloat subscriptionEnabledDate;
@property (retain, nonatomic) NSString *subscriptionName;
@property (retain, nonatomic) NSString *subscriptionOfferAppType;
@property (retain, nonatomic) NSString *uberBackgroundImageURL;
@property (retain, nonatomic) NSString *uberBackgroundJoeColor;
@property (retain, nonatomic) NSString *url;


+(id)createOrFindChannelFromFeedChannelItem:(id)arg0 personalizedRequest:(BOOL)arg1 context:(id)arg2 ;
+(id)predicateForChannelStoreIds:(id)arg0 ;
+(id)predicateForChannelWithStoreId:(NSInteger)arg0 ;
+(id)predicateForFollowedChannel;
+(id)predicateForLibraryChannel;
+(id)predicateForMultiShowChannel;
+(id)predicateForSingleShowChannel;
+(id)predicateForSubscribedChannel;
+(id)sortDescriptorsForLibraryChannelsPage;


@end


#endif