// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLLOCATIONINTERNAL_H
#define CLLOCATIONINTERNAL_H

@class NSData;

#import <Foundation/Foundation.h>

#import "CLLocationMatchInfo.h"
#import "_CLLocationGroundAltitude.h"
#import "_CLLocationFusionInfo.h"
#import "CLLocationTrackRunInfo.h"
#import "CLLocationGnssOdometerInfo.h"

@interface CLLocationInternal : NSObject {
    ? fLocation;
    CLLocationMatchInfo *fMatchInfo;
    _CLLocationGroundAltitude *fGroundAltitude;
    CGFloat fTrustedTimestamp;
    NSData *fCoarseMetaData;
    _CLLocationFusionInfo *fFusionInfo;
    CLLocationTrackRunInfo *fTrackRunInfo;
    CGFloat fRawHorizontalAccuracy;
    CGFloat fRawAltitude;
    CGFloat fRawVerticalAccuracy;
    CGFloat fRawCourseAccuracy;
    int fPositionContextState;
    CGFloat fProbabilityPositionContextStateIndoor;
    CGFloat fProbabilityPositionContextStateOutdoor;
    CLLocationGnssOdometerInfo *fGnssOdometerInfo;
}




-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithClientLocation:(struct ? )arg0 ;
-(id)initWithClientLocation:(struct ? )arg0 clientLocationPrivate:(struct ? )arg1 ;
-(id)initWithClientLocation:(struct ? )arg0 clientLocationPrivate:(struct ? )arg1 coarseMetaData:(id)arg2 ;
-(id)initWithClientLocation:(struct ? )arg0 coarseMetaData:(id)arg1 ;
-(id)initWithClientLocation:(struct ? )arg0 matchInfo:(id)arg1 trustedTimestamp:(CGFloat)arg2 groundAltitude:(id)arg3 ;
-(id)initWithClientLocation:(struct ? )arg0 matchInfo:(id)arg1 trustedTimestamp:(CGFloat)arg2 groundAltitude:(id)arg3 fusionInfo:(id)arg4 trackRunInfo:(id)arg5 rawHorizontalAccuracy:(CGFloat)arg6 rawAltitude:(CGFloat)arg7 rawVerticalAccuracy:(CGFloat)arg8 rawCourseAccuracy:(CGFloat)arg9 positionContextStateType:(int)arg10 probabilityPositionContextStateIndoor:(CGFloat)arg11 probabilityPositionContextStateOutdoor:(CGFloat)arg12 gnssOdometerInfo:(id)arg13 ;
-(id)initWithClientLocation:(struct ? )arg0 matchInfo:(id)arg1 trustedTimestamp:(CGFloat)arg2 groundAltitude:(id)arg3 fusionInfo:(id)arg4 trackRunInfo:(id)arg5 rawHorizontalAccuracy:(CGFloat)arg6 rawAltitude:(CGFloat)arg7 rawVerticalAccuracy:(CGFloat)arg8 rawCourseAccuracy:(CGFloat)arg9 positionContextStateType:(int)arg10 probabilityPositionContextStateIndoor:(CGFloat)arg11 probabilityPositionContextStateOutdoor:(CGFloat)arg12 gnssOdometerInfo:(id)arg13 coarseMetaData:(id)arg14 ;
-(void)dealloc;


@end


#endif