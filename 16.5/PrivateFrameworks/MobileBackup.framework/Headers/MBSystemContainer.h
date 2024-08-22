// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MBSYSTEMCONTAINER_H
#define MBSYSTEMCONTAINER_H



#import "MBContainer.h"

@interface MBSystemContainer : MBContainer



+(id)systemContainerWithDomainName:(id)arg0 containerDir:(id)arg1 isShared:(BOOL)arg2 ;
+(id)systemContainerWithPropertyList:(id)arg0 ;
-(id)domain;


@end


#endif