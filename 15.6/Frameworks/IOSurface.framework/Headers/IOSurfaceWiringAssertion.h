// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IOSURFACEWIRINGASSERTION_H
#define IOSURFACEWIRINGASSERTION_H


#import <Foundation/Foundation.h>


@interface IOSurfaceWiringAssertion : NSObject {
    unsigned int _mach_port;
}




-(id)initWithIOSurface:(id)arg0 ;
-(id)initWithIOSurfaceClient:(struct __IOSurfaceClient *)arg0 ;
-(void)dealloc;


@end


#endif