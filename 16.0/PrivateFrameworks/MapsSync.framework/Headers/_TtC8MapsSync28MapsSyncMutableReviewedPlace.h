// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC8MAPSSYNC28MAPSSYNCMUTABLEREVIEWEDPLACE_H
#define _TTC8MAPSSYNC28MAPSSYNCMUTABLEREVIEWEDPLACE_H

@class TtC8MapsSync23MapsSyncMutableBaseItem, NSDate, NSNumber;


#import "_TtC8MapsSync27MapsSyncAnonymousCredential.h"

@interface _TtC8MapsSync28MapsSyncMutableReviewedPlace : TtC8MapsSync23MapsSyncMutableBaseItem {
    ? _proxyObject;
}


@property (nonatomic, retain) _TtC8MapsSync27MapsSyncAnonymousCredential *anonymousCredential;
@property (nonatomic) BOOL hasUserReviewed;
@property (nonatomic, copy) NSDate *lastSuggestedReviewDate;
@property (nonatomic) NSUInteger muid;
@property (nonatomic, retain) NSNumber *rating;
@property (nonatomic) int uploadedPhotosCount;
@property (nonatomic) short version;


-(id)initWithProxyObject:(id)arg0 ;
-(void)setMapItemIdentifier:(id)arg0 ;


@end


#endif