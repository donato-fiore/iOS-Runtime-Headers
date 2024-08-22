// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PRVIODEVICEPOSEPROVIDER_H
#define PRVIODEVICEPOSEPROVIDER_H

@class NSString, ARSession;
@protocol ARSessionDelegate;


#import "PRDevicePoseProvider.h"
#import "PRDevicePoseValidator.h"

@interface PRVIODevicePoseProvider : PRDevicePoseProvider <ARSessionDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PRDevicePoseValidator *poseValidator; // ivar: _poseValidator
@property (retain, nonatomic) ARSession *session; // ivar: _session
@property (readonly) Class superclass;
@property (nonatomic) BOOL trackingNormal; // ivar: _trackingNormal


-(id)initWithARSession:(id)arg0 ;
-(void)reset;
-(void)session:(id)arg0 didUpdateFrame:(id)arg1 ;


@end


#endif