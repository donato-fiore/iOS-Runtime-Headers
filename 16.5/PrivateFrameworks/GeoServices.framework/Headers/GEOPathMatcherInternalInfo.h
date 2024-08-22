// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOPATHMATCHERINTERNALINFO_H
#define GEOPATHMATCHERINTERNALINFO_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface GEOPathMatcherInternalInfo : NSObject

@property (retain, nonatomic) NSString *base64Path; // ivar: _base64Path
@property (retain, nonatomic) NSArray *matchedSegments; // ivar: _matchedSegments
@property (nonatomic) GEOPolylineCoordinateRange range; // ivar: _range




@end


#endif