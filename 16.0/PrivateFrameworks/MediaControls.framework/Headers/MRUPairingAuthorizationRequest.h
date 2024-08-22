// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MRUPAIRINGAUTHORIZATIONREQUEST_H
#define MRUPAIRINGAUTHORIZATIONREQUEST_H

@class AVOutputDevice;

#import <Foundation/Foundation.h>


@interface MRUPairingAuthorizationRequest : NSObject

@property (readonly, nonatomic) AVOutputDevice *outputDevice; // ivar: _outputDevice


-(id)initWithOutputDevice:(id)arg0 ;
-(void)cancel;
-(void)completeWithPasscode:(id)arg0 ;


@end


#endif