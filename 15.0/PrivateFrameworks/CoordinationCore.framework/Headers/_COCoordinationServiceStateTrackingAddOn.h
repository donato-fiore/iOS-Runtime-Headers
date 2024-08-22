// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _COCOORDINATIONSERVICESTATETRACKINGADDON_H
#define _COCOORDINATIONSERVICESTATETRACKINGADDON_H



#import "COMeshAddOn.h"
#import "COCoordinationService.h"

@interface _COCoordinationServiceStateTrackingAddOn : COMeshAddOn

@property (weak, nonatomic) COCoordinationService *service; // ivar: _service


-(void)didStopMeshController:(id)arg0 ;


@end


#endif