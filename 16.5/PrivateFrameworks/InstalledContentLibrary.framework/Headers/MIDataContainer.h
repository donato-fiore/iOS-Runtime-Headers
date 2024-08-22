// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MIDATACONTAINER_H
#define MIDATACONTAINER_H



#import "MIContainer.h"

@interface MIDataContainer : MIContainer

@property (nonatomic) int contentProtectionClass; // ivar: _contentProtectionClass


+(id)dataContainerForExecutableBundle:(id)arg0 createIfNeeded:(BOOL)arg1 temporary:(BOOL)arg2 created:(*BOOL)arg3 error:(*id)arg4 ;
-(id)_oldCompatiblityLinkDestination;
-(void)makeSymlinkToBundleInContainerIfNeeded:(id)arg0 ;


@end


#endif