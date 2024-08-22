// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICRADIOPLAYBACKHISTORY_H
#define ICRADIOPLAYBACKHISTORY_H

@class NSArray, NSDictionary, NSString;
@protocol NSCopying, NSMutableCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "ICRadioPlaybackHistoryItem.h"

@interface ICRadioPlaybackHistory : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

 {
    NSArray *_tracks;
}


@property (readonly, copy, nonatomic) ICRadioPlaybackHistoryItem *currentTrack; // ivar: _currentTrack
@property (readonly, nonatomic) NSInteger numberOfSkips; // ivar: _numberOfSkips
@property (readonly, copy, nonatomic) NSDictionary *propertyListRepresentation;
@property (readonly, copy, nonatomic) NSString *stationIdentifier; // ivar: _stationIdentifier
@property (readonly, copy, nonatomic) NSArray *tracks;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStationIdentifier:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif