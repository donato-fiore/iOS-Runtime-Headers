// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BLSBACKLIGHTSCENEENVIRONMENTUPDATER_H
#define BLSBACKLIGHTSCENEENVIRONMENTUPDATER_H

@class NSString;
@protocol BLSBacklightSceneEnvironmentUpdating, BLSBacklightSceneEnvironment_Private;

#import <Foundation/Foundation.h>


@interface BLSBacklightSceneEnvironmentUpdater : NSObject <BLSBacklightSceneEnvironmentUpdating>

 {
    id<BLSBacklightSceneEnvironment_Private> *_environment;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithEnvironment:(id)arg0 ;
-(void)performDesiredFidelityRequest:(id)arg0 ;
-(void)performFrameSpecifiersRequest:(id)arg0 ;
-(void)updatedEnvironmentWithDelta:(struct ? )arg0 backlightSceneUpdate:(id)arg1 ;


@end


#endif