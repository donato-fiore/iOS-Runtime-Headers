// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CFPDCONTAINERSOURCE_H
#define CFPDCONTAINERSOURCE_H



#import "CFPDSource.h"

@interface CFPDContainerSource : CFPDSource {
    *__CFString _containerPath;
}




-(id)initWithDomain:(struct __CFString *)arg0 userName:(struct __CFString *)arg1 container:(struct __CFString *)arg2 byHost:(BOOL)arg3 managed:(BOOL)arg4 shmemIndex:(short)arg5 daemon:(id)arg6 ;
-(struct __CFString *)container;
-(void)dealloc;


@end


#endif