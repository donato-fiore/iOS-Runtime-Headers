// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVAUDIOSESSIONROUTEDESCRIPTION_H
#define AVAUDIOSESSIONROUTEDESCRIPTION_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface AVAudioSessionRouteDescription : NSObject {
    *void _impl;
}


@property (readonly, nonatomic) NSArray *inputs;
@property (readonly, nonatomic) NSArray *outputs;
@property (readonly) NSUInteger siriInputSource;
@property (readonly) NSString *siriRemoteInputIdentifier;
@property (readonly) BOOL supportsDoAP;
@property (readonly) BOOL supportsSoftwareVolume;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToRoute:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithRawDescription:(id)arg0 owningSession:(id)arg1 ;
-(struct RouteDescriptionImpl *)privateGetImplementation;
-(void)dealloc;
-(void)updateOutputPortsWithSpatialAudioStatus:(BOOL)arg0 ;


@end


#endif