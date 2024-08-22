// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOMAPFEATURERUNNINGTRACKLANE_H
#define GEOMAPFEATURERUNNINGTRACKLANE_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface GEOMapFeatureRunningTrackLane : NSObject

@property (readonly, nonatomic) NSArray *coordinates; // ivar: _coordinates
@property (readonly, nonatomic) unsigned int flowlineOffset; // ivar: _flowlineOffset
@property (readonly, nonatomic) NSUInteger type; // ivar: _type
@property (readonly, nonatomic) unsigned int width; // ivar: _width


-(id)description;
-(id)initWithVMP4Lane:(*void)arg0 coordinates:(id)arg1 ;


@end


#endif