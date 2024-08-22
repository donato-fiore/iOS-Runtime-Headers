// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKIDENTITYAUTHORIZATIONCONTROLLER_H
#define PKIDENTITYAUTHORIZATIONCONTROLLER_H

@class DIIdentityAuthorizationController;

#import <Foundation/Foundation.h>


@interface PKIdentityAuthorizationController : NSObject

@property (retain, nonatomic) DIIdentityAuthorizationController *wrapped; // ivar: _wrapped


-(id)init;
-(void)cancelRequest;
-(void)checkCanRequestDocument:(id)arg0 completion:(id)arg1 ;
-(void)requestDocument:(id)arg0 completion:(id)arg1 ;


@end


#endif