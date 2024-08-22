// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ARGEOTRACKINGDATA_H
#define ARGEOTRACKINGDATA_H

@class NSString;
@protocol ARResultData, ARDaemonSecureCoding;

#import <Foundation/Foundation.h>

#import "ARLocationData.h"

@interface ARGeoTrackingData : NSObject <ARResultData, ARDaemonSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) ARLocationData *enuOrigin; // ivar: _enuOrigin
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) ? vioFromENU; // ivar: _vioFromENU


+(BOOL)supportsSecureCoding;
-(id)anchorsForCameraWithTransform:(struct ? )arg0 referenceOriginTransform:(struct ? )arg1 existingAnchors:(id)arg2 anchorsToRemove:(id)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithENUOrigin:(id)arg0 vioFromENU:(struct ? )arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif