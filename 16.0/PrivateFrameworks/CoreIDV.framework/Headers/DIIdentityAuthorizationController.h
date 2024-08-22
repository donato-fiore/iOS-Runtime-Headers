// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DIIDENTITYAUTHORIZATIONCONTROLLER_H
#define DIIDENTITYAUTHORIZATIONCONTROLLER_H


#import <Foundation/Foundation.h>

#import "_TtC7CoreIDV25DigitalPresentmentSession.h"

@interface DIIdentityAuthorizationController : NSObject

@property (retain) _TtC7CoreIDV25DigitalPresentmentSession *session; // ivar: _session


-(id)init;
-(void)cancelRequest;
-(void)checkCanRequestDocument:(id)arg0 completion:(id)arg1 ;
-(void)requestDocument:(id)arg0 completion:(id)arg1 ;


@end


#endif