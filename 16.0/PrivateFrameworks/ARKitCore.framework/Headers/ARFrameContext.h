// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ARFRAMECONTEXT_H
#define ARFRAMECONTEXT_H

@class NSUUID, NSMutableArray, NSArray, NSSet, NSString;
@protocol ARDaemonSecureCoding, ARResultDataContext;

#import <Foundation/Foundation.h>

#import "ARImageData.h"
#import "ARLocationData.h"
#import "ARDeviceOrientationData.h"
#import "ARWorldMap.h"

@interface ARFrameContext : NSObject <ARDaemonSecureCoding, ARResultDataContext>

 {
    NSUUID *_identifier;
    NSMutableArray *_anchorsToAdd;
    NSMutableArray *_anchorsToRemove;
    NSMutableArray *_anchorsToStopTracking;
}


@property (readonly, copy, nonatomic) NSArray *anchorsToAdd;
@property (readonly, copy, nonatomic) NSArray *anchorsToRemove;
@property (readonly, copy, nonatomic) NSArray *anchorsToStopTracking;
@property (copy, nonatomic) NSSet *collaborationData; // ivar: _collaborationData
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didRelocalize; // ivar: _didRelocalize
@property (nonatomic) NSUInteger frameDebugOptions; // ivar: _frameDebugOptions
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) ARImageData *imageData; // ivar: _imageData
@property (retain, nonatomic) ARLocationData *locationData; // ivar: _locationData
@property (retain, nonatomic) ARDeviceOrientationData *orientationData; // ivar: _orientationData
@property (nonatomic) ? relocalizationDeltaTransform; // ivar: _relocalizationDeltaTransform
@property (nonatomic) ? sessionTransform; // ivar: _sessionTransform
@property (readonly, nonatomic) BOOL sessionTransformReset; // ivar: _sessionTransformReset
@property (readonly, nonatomic) BOOL sessionTransformShouldResumeCameraHeading; // ivar: _sessionTransformShouldResumeCameraHeading
@property (readonly, nonatomic) BOOL sessionTransformShouldResumeCameraPosition; // ivar: _sessionTransformShouldResumeCameraPosition
@property (readonly, nonatomic) BOOL sessionTransformUpdated; // ivar: _sessionTransformUpdated
@property (readonly) Class superclass;
@property (nonatomic) NSInteger worldAlignment; // ivar: _worldAlignment
@property (retain, nonatomic) ARWorldMap *worldMap; // ivar: _worldMap


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)cameraPosition;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)resultDataOfClass:(Class)arg0 ;
-(void)addAnchor:(id)arg0 ;
-(void)clearAddedAnchors;
-(void)encodeWithCoder:(id)arg0 ;
-(void)removeAnchor:(id)arg0 ;
-(void)resumeSessionCameraPosition;
-(void)resumeSessionCameraPositionAndHeading;
-(void)stopTrackingAnchors:(id)arg0 ;


@end


#endif