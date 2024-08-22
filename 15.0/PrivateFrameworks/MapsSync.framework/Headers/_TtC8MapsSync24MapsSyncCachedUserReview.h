// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC8MAPSSYNC24MAPSSYNCCACHEDUSERREVIEW_H
#define _TTC8MAPSSYNC24MAPSSYNCCACHEDUSERREVIEW_H

@class TtC8MapsSync16MapsSyncBaseItem, NSString;


#import "_TtC8MapsSync19MapsSyncDataSession.h"

@interface _TtC8MapsSync24MapsSyncCachedUserReview : TtC8MapsSync16MapsSyncBaseItem {
    ? _muid;
    ? _numberPhotosUploaded;
    ? _rating;
}


@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSUInteger muid;
@property (nonatomic, readonly) int numberPhotosUploaded;
@property (nonatomic, readonly) short rating;
@property (nonatomic, readonly) _TtC8MapsSync19MapsSyncDataSession *session;


-(BOOL)isEqual:(id)arg0 ;
-(Class)managedObjectClass;
-(Class)mutableObjectClass;
-(id)initWithObject:(id)arg0 ;
-(void)addEditWithBlock:(id)arg0 ;
-(void)setPropertiesWithObject:(id)arg0 ;


@end


#endif