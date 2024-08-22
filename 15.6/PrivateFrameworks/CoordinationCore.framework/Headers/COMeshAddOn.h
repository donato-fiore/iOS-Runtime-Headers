// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef COMESHADDON_H
#define COMESHADDON_H


#import <Foundation/Foundation.h>

#import "COMeshController.h"

@interface COMeshAddOn : NSObject

@property (weak, nonatomic) COMeshController *meshController; // ivar: _meshController


-(void)didAddToMeshController:(id)arg0 ;
-(void)didChangeNodesForMeshController:(id)arg0 ;
-(void)didRemoveFromMeshController:(id)arg0 ;
-(void)didStartMeshController:(id)arg0 ;
-(void)didStopMeshController:(id)arg0 ;
-(void)meshController:(id)arg0 didTransitionToState:(NSUInteger)arg1 ;
-(void)meshController:(id)arg0 willTransitionToState:(NSUInteger)arg1 ;
-(void)willAddToMeshController:(id)arg0 ;
-(void)willRemoveFromMeshController:(id)arg0 ;
-(void)willStartMeshController:(id)arg0 ;
-(void)willStopMeshController:(id)arg0 ;


@end


#endif