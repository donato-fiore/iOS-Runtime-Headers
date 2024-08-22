// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _COCLUSTERALIASMANAGERSTATETRACKINGADDON_H
#define _COCLUSTERALIASMANAGERSTATETRACKINGADDON_H



#import "COMeshAddOn.h"
#import "COClusterAliasManager.h"

@interface _COClusterAliasManagerStateTrackingAddOn : COMeshAddOn

@property (weak, nonatomic) COClusterAliasManager *aliasManager; // ivar: _aliasManager


-(void)didStopMeshController:(id)arg0 ;


@end


#endif