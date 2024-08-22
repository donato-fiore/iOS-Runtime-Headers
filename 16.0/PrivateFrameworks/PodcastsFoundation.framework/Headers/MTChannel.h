// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTCHANNEL_H
#define MTCHANNEL_H

@class NSManagedObject, NSString, NSSet;



@interface MTChannel : NSManagedObject

@property (retain, nonatomic) NSString *artworkURL;
@property (retain, nonatomic) NSString *backgroundColor;
@property (retain, nonatomic) NSString *displayType;
@property (nonatomic) CGFloat lastPersonalizedRequestDate;
@property (nonatomic) float logoImageHeight;
@property (retain, nonatomic) NSString *logoImageURL;
@property (nonatomic) float logoImageWidth;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSSet *podcastUuids;
@property (retain, nonatomic) NSSet *podcasts;
@property (nonatomic) NSInteger storeId;
@property (nonatomic) BOOL subscriptionActive;
@property (nonatomic) CGFloat subscriptionEnabledDate;
@property (nonatomic) NSInteger totalShowCount;
@property (retain, nonatomic) NSString *uberBackgroundImageURL;
@property (retain, nonatomic) NSString *uberBackgroundJoeColor;
@property (retain, nonatomic) NSString *url;


+(id)createOrFindChannelFromFeedChannelItem:(id)arg0 personalizedRequest:(BOOL)arg1 context:(id)arg2 ;
+(id)predicateForChannelWithStoreId:(NSInteger)arg0 ;


@end


#endif