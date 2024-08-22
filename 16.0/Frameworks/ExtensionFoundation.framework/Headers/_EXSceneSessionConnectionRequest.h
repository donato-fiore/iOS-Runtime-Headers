// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _EXSCENESESSIONCONNECTIONREQUEST_H
#define _EXSCENESESSIONCONNECTIONREQUEST_H

@class NSXPCListenerEndpoint, NSUUID;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "_EXSceneSessionParameters.h"

@interface _EXSceneSessionConnectionRequest : NSObject <NSSecureCoding>



@property (retain) NSXPCListenerEndpoint *hostEndpoint; // ivar: _hostEndpoint
@property (retain) NSUUID *identifier; // ivar: _identifier
@property (retain) _EXSceneSessionParameters *parameters; // ivar: _parameters


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif