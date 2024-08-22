// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FBSUIAPPLICATIONWORKSPACE_H
#define FBSUIAPPLICATIONWORKSPACE_H

@protocol FBSUIApplicationWorkspaceDelegate;


#import "FBSWorkspace.h"

@interface FBSUIApplicationWorkspace : FBSWorkspace

@property (readonly, nonatomic) NSObject<FBSUIApplicationWorkspaceDelegate> *delegate;


-(id)initWithSerialQueue:(id)arg0 ;


@end


#endif