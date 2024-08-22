// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOCOMPOSEDROUTELANEINFO_H
#define GEOCOMPOSEDROUTELANEINFO_H

@class NSMutableArray, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface GEOComposedRouteLaneInfo : NSObject <NSSecureCoding>

 {
    NSMutableArray *_directions;
    BOOL _good;
    BOOL _hov;
    BOOL _preferred;
}


@property (readonly, nonatomic) NSArray *directions;
@property (readonly, nonatomic) BOOL hasDirections;
@property (readonly, nonatomic) BOOL isHOVLane;
@property (readonly, nonatomic) BOOL isLaneForManeuver;
@property (readonly, nonatomic) BOOL isPreferredLaneForManeuver;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLaneInfo:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif