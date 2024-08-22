// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef COREDAVACTIONBACKEDTASK_H
#define COREDAVACTIONBACKEDTASK_H



#import "CoreDAVTask.h"
#import "CoreDAVAction.h"

@interface CoreDAVActionBackedTask : CoreDAVTask

@property (retain, nonatomic) CoreDAVAction *backingAction; // ivar: _backingAction


-(id)description;


@end


#endif