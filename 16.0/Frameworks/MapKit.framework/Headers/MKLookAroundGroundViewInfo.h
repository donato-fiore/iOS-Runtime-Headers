// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MKLOOKAROUNDGROUNDVIEWINFO_H
#define MKLOOKAROUNDGROUNDVIEWINFO_H

@class GEOLocationInfo;

#import <Foundation/Foundation.h>


@interface MKLookAroundGroundViewInfo : NSObject

@property (readonly, nonatomic) CGFloat endHeading; // ivar: _endHeading
@property (readonly, nonatomic) GEOLocationInfo *locationInfo; // ivar: _locationInfo
@property (readonly, nonatomic) CGFloat startHeading; // ivar: _startHeading


-(BOOL)isHeadingInRange:(CGFloat)arg0 ;
-(id)initWithStartHeading:(CGFloat)arg0 endHeading:(CGFloat)arg1 localityName:(id)arg2 locationName:(id)arg3 secondaryLocationName:(id)arg4 ;


@end


#endif