// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKLAUNCHREQUEST_H
#define PKLAUNCHREQUEST_H

@class NSString, NSUUID;
@protocol PKLaunchRequest, PKPersona;

#import <Foundation/Foundation.h>


@interface PKLaunchRequest : NSObject <PKLaunchRequest>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) NSObject<PKPersona> *launchPersona; // ivar: _launchPersona
@property (readonly) Class superclass;
@property (copy) NSUUID *uuid; // ivar: _uuid


+(id)launchRequestWithUUID:(id)arg0 launchPersona:(id)arg1 ;
-(id)_initWithUUID:(id)arg0 launchPersona:(id)arg1 ;


@end


#endif