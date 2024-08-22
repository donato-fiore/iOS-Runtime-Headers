// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXHEROENTRY_H
#define ATXHEROENTRY_H

@class NSString;

#import <Foundation/Foundation.h>


@interface ATXHeroEntry : NSObject

@property (readonly, nonatomic) NSUInteger adamId; // ivar: _adamId
@property (readonly, nonatomic) BOOL isTouristApp; // ivar: _isTouristApp
@property (readonly, nonatomic) CLLocationCoordinate2D location; // ivar: _location
@property (readonly, copy, nonatomic) NSString *poiCategory; // ivar: _poiCategory
@property (readonly, nonatomic) NSUInteger radiusInMeters; // ivar: _radiusInMeters
@property (readonly, nonatomic) NSUInteger rank; // ivar: _rank
@property (readonly, copy, nonatomic) NSString *urlHash; // ivar: _urlHash


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToAppAndClipEntry:(id)arg0 ;
-(id)heroAppDataForLocation:(id)arg0 ;
-(id)init;
-(id)initWithAdamId:(NSUInteger)arg0 urlHash:(id)arg1 location:(struct CLLocationCoordinate2D )arg2 radiusInMeters:(NSUInteger)arg3 rank:(NSUInteger)arg4 isTouristApp:(BOOL)arg5 poiCategory:(id)arg6 ;


@end


#endif