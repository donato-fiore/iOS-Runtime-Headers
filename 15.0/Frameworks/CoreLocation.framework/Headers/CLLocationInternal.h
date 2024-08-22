// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLLOCATIONINTERNAL_H
#define CLLOCATIONINTERNAL_H

@class NSData;

#import <Foundation/Foundation.h>

#import "CLLocationMatchInfo.h"
#import "_CLLocationGroundAltitude.h"
#import "_CLLocationFusionInfo.h"

@interface CLLocationInternal : NSObject {
    ? fLocation;
    CLLocationMatchInfo *fMatchInfo;
    _CLLocationGroundAltitude *fGroundAltitude;
    CGFloat fTrustedTimestamp;
    NSData *fCoarseMetaData;
    _CLLocationFusionInfo *fFusionInfo;
    CGFloat fRawHorizontalAccuracy;
    CGFloat fRawAltitude;
    CGFloat fRawVerticalAccuracy;
    CGFloat fRawCourseAccuracy;
    int fPositionContextState;
    CGFloat fProbabilityPositionContextStateIndoor;
    CGFloat fProbabilityPositionContextStateOutdoor;
}




-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithClientLocation:(struct ? )arg0 ;
-(id)initWithClientLocation:(struct ? )arg0 clientLocationPrivate:(struct ? )arg1 ;
-(id)initWithClientLocation:(struct ? )arg0 clientLocationPrivate:(struct ? )arg1 coarseMetaData:(id)arg2 ;
-(id)initWithClientLocation:(struct ? )arg0 coarseMetaData:(id)arg1 ;
-(id)initWithClientLocation:(struct ? )arg0 matchInfo:(id)arg1 trustedTimestamp:(CGFloat)arg2 groundAltitude:(id)arg3 ;
-(id)initWithClientLocation:(struct ? )arg0 matchInfo:(id)arg1 trustedTimestamp:(CGFloat)arg2 groundAltitude:(id)arg3 fusionInfo:(id)arg4 rawHorizontalAccuracy:(CGFloat)arg5 rawAltitude:(CGFloat)arg6 rawVerticalAccuracy:(CGFloat)arg7 rawCourseAccuracy:(CGFloat)arg8 positionContextStateType:(int)arg9 probabilityPositionContextStateIndoor:(CGFloat)arg10 probabilityPositionContextStateOutdoor:(CGFloat)arg11 ;
-(id)initWithClientLocation:(struct ? )arg0 matchInfo:(id)arg1 trustedTimestamp:(CGFloat)arg2 groundAltitude:(id)arg3 fusionInfo:(id)arg4 rawHorizontalAccuracy:(CGFloat)arg5 rawAltitude:(CGFloat)arg6 rawVerticalAccuracy:(CGFloat)arg7 rawCourseAccuracy:(CGFloat)arg8 positionContextStateType:(int)arg9 probabilityPositionContextStateIndoor:(CGFloat)arg10 probabilityPositionContextStateOutdoor:(CGFloat)arg11 coarseMetaData:(id)arg12 ;
-(void)dealloc;


@end


#endif