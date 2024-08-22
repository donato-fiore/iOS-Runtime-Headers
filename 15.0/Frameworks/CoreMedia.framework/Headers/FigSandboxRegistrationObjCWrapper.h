// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FIGSANDBOXREGISTRATIONOBJCWRAPPER_H
#define FIGSANDBOXREGISTRATIONOBJCWRAPPER_H


#import <Foundation/Foundation.h>


@interface FigSandboxRegistrationObjCWrapper : NSObject {
    *FigOpaqueSandboxRegistration sandboxreg;
}




-(id)initWithRegistration:(struct FigOpaqueSandboxRegistration *)arg0 ;
-(struct FigOpaqueSandboxRegistration *)_sandboxRegistration;
-(void)dealloc;


@end


#endif