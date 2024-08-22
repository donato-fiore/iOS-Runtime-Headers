// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDCOORDINATIONADDONIMPL_H
#define HMDCOORDINATIONADDONIMPL_H

@class COMeshAddOn;
@protocol HMDCoordinationAddOnImplDelegate;



@interface HMDCoordinationAddOnImpl : COMeshAddOn

@property (weak, nonatomic) NSObject<HMDCoordinationAddOnImplDelegate> *delegate; // ivar: _delegate


-(void)didChangeNodesForMeshController:(id)arg0 ;
-(void)meshController:(id)arg0 didTransitionToState:(NSUInteger)arg1 ;


@end


#endif