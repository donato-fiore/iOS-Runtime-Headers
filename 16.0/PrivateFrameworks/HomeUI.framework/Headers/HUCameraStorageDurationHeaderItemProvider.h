// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUCAMERASTORAGEDURATIONHEADERITEMPROVIDER_H
#define HUCAMERASTORAGEDURATIONHEADERITEMPROVIDER_H

@class HFStaticItemProvider, NSSet;



@interface HUCameraStorageDurationHeaderItemProvider : HFStaticItemProvider

@property (readonly, copy, nonatomic) NSSet *cameraProfiles; // ivar: _cameraProfiles
@property (readonly, nonatomic) NSUInteger displayStyle; // ivar: _displayStyle


-(id)initWithCameraProfiles:(id)arg0 displayStyle:(NSUInteger)arg1 ;
-(id)initWithItems:(id)arg0 ;
-(id)invalidationReasons;


@end


#endif