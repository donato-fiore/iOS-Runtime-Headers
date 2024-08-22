// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOVENUEFLOORINFO_H
#define GEOVENUEFLOORINFO_H

@class NSString;
@protocol GEOVenueFloorInfo;

#import <Foundation/Foundation.h>


@interface GEOVenueFloorInfo : NSObject <GEOVenueFloorInfo>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger levelID; // ivar: _levelID
@property (readonly, nonatomic) short ordinal; // ivar: _ordinal
@property (readonly) Class superclass;


+(BOOL)isIntegerValidOrdinal:(NSInteger)arg0 ;
+(id)floorInfosFromLevels:(id)arg0 ;
-(id)init;
-(id)initWithLevel:(id)arg0 ;
-(id)initWithOrdinal:(short)arg0 levelID:(NSUInteger)arg1 ;


@end


#endif