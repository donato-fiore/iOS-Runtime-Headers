// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOSTOREFRONTIMAGERY_H
#define GEOSTOREFRONTIMAGERY_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface GEOStorefrontImagery : NSObject

@property (readonly, nonatomic) unsigned short bucketId; // ivar: _bucketId
@property (readonly, nonatomic) unsigned int buildId; // ivar: _buildId
@property (readonly, nonatomic) NSArray *cameras; // ivar: _cameras
@property (readonly, nonatomic) unsigned int dataFormatVersion; // ivar: _dataFormatVersion
@property (readonly, nonatomic) CGFloat groundAltitude; // ivar: _groundAltitude
@property (readonly, nonatomic) NSUInteger identifier; // ivar: _identifier
@property (readonly, nonatomic) GEOOrientedPosition position; // ivar: _position
@property (readonly, nonatomic) NSUInteger timestamp; // ivar: _timestamp


-(id)init;
-(id)initWithPhotoPosition:(id)arg0 ;


@end


#endif