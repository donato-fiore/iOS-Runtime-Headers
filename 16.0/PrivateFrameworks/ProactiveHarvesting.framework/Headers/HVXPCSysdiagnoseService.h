// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HVXPCSYSDIAGNOSESERVICE_H
#define HVXPCSYSDIAGNOSESERVICE_H

@class _PASXPCClientHelper;

#import <Foundation/Foundation.h>


@interface HVXPCSysdiagnoseService : NSObject {
    _PASXPCClientHelper *_helper;
}




-(id)init;
-(id)synchronousProxy;
-(id)sysdiagnoseStringWithError:(*id)arg0 ;


@end


#endif