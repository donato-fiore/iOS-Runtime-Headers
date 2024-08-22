// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUTEMPERATURECOLORWHEELSPACE_H
#define HUTEMPERATURECOLORWHEELSPACE_H

@class NSString;
@protocol HUColorWheelSpace;

#import <Foundation/Foundation.h>


@interface HUTemperatureColorWheelSpace : NSObject <HUColorWheelSpace>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger mirroringBiasAxis; // ivar: _mirroringBiasAxis
@property (readonly) Class superclass;
@property (readonly, nonatomic) ? supportedRange; // ivar: _supportedRange
@property (readonly, nonatomic) NSUInteger type;


+(struct ? )defaultTemperatureRange;
+(struct ? )largestAllowableTemperatureRange;
-(id)init;
-(id)initWithSupportedRange:(struct ? )arg0 ;
-(struct ? )colorForCoordinate:(struct ? )arg0 ;
-(struct ? )coordinateForColor:(struct ? )arg0 isValid:(*BOOL)arg1 ;


@end


#endif