// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKSHAREAUTHORIZATIONSESSION_H
#define PKSHAREAUTHORIZATIONSESSION_H

@class LAContext;

#import <Foundation/Foundation.h>


@interface PKShareAuthorizationSession : NSObject {
    LAContext *_context;
}




-(id)init;
// -(void)authorizeDeviceOwnerWithAuthHandler:(id)arg0 completion:(unk)arg1  ;
-(void)dealloc;
-(void)invalidate;


@end


#endif