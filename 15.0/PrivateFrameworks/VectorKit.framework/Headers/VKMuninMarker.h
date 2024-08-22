// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VKMUNINMARKER_H
#define VKMUNINMARKER_H

@class NSDate;

#import <Foundation/Foundation.h>


@interface VKMuninMarker : NSObject {
    optional<md::mun::CollectionPoint> _collectionPoint;
}


@property (readonly, nonatomic) unsigned int buildId;
@property (readonly, nonatomic) BOOL canMoveToMarker;
@property (readonly, nonatomic) NSDate *collectionDate;
@property (readonly, nonatomic) *void collectionPoint;
@property (readonly, nonatomic) ? coordinate; // ivar: _coordinate
@property (readonly, nonatomic) NSUInteger pointId;


-(id)initWithCollectionPoint:(*void)arg0 ;
-(id)initWithCoordinate:(struct ? )arg0 ;


@end


#endif