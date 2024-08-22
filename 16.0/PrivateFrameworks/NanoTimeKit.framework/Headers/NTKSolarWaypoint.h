// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKSOLARWAYPOINT_H
#define NTKSOLARWAYPOINT_H

@class NSString, NSDate;
@protocol NTKCacheableKeyProvider;

#import <Foundation/Foundation.h>

#import "NTKSolarTimeModel.h"

@interface NTKSolarWaypoint : NSObject <NTKCacheableKeyProvider>

 {
    NSString *_localizedName;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *localizedName;
@property (readonly, nonatomic) CGFloat percentageThroughPeriodForWaypointDate; // ivar: _percentageThroughPeriodForWaypointDate
@property (readonly, nonatomic) NTKSolarTimeModel *solarTimeModel; // ivar: _solarTimeModel
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger type; // ivar: _type
@property (readonly, nonatomic) NSDate *waypointDate; // ivar: _waypointDate


-(id)initWithType:(NSInteger)arg0 solarTimeModel:(id)arg1 ;
-(id)ntkCacheableKey;
-(void)updateDependentValues;
-(void)updateDependentValuesWithPlaceholderData;


@end


#endif