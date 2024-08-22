// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFCAMERACLIPSIGNIFICANTEVENTITEM_H
#define HFCAMERACLIPSIGNIFICANTEVENTITEM_H

@class HMCameraProfile, HMCameraClipSignificantEvent, HMHome;
@protocol NSCopying;


#import "HFFetchedHomeKitObjectItem.h"

@interface HFCameraClipSignificantEventItem : HFFetchedHomeKitObjectItem <NSCopying>



@property (readonly, nonatomic) HMCameraProfile *cameraProfile; // ivar: _cameraProfile
@property (readonly, copy, nonatomic) HMCameraClipSignificantEvent *event;
@property (readonly, nonatomic) HMHome *home; // ivar: _home


-(id)_subclass_updateWithOptions:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)initWithSignificantEvent:(id)arg0 home:(id)arg1 ;


@end


#endif