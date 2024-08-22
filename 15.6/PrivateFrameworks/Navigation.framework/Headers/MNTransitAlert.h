// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MNTRANSITALERT_H
#define MNTRANSITALERT_H

@class GEOTransitBanner, GEOPBTransitArtwork;
@protocol NSSecureCoding, GEOServerFormattedString;

#import <Foundation/Foundation.h>

#import "MNActiveRouteInfo.h"

@interface MNTransitAlert : NSObject <NSSecureCoding>

 {
    GEOTransitBanner *_banner;
}


@property (readonly, nonatomic) GEOPBTransitArtwork *artwork;
@property (readonly, nonatomic) NSObject<GEOServerFormattedString> *command;
@property (readonly, nonatomic) MNActiveRouteInfo *currentRouteInfo; // ivar: _currentRouteInfo
@property (readonly, nonatomic) NSObject<GEOServerFormattedString> *detail;
@property (readonly, nonatomic) int maneuverType; // ivar: _maneuverType
@property (readonly, nonatomic) NSUInteger stepIndex; // ivar: _stepIndex
@property (readonly, nonatomic) NSUInteger stopIndex; // ivar: _stopIndex


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTransitBanner:(id)arg0 transitStep:(id)arg1 activeRoute:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif