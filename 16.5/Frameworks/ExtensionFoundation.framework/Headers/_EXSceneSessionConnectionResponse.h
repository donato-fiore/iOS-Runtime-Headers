// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _EXSCENESESSIONCONNECTIONRESPONSE_H
#define _EXSCENESESSIONCONNECTIONRESPONSE_H

@class NSXPCListenerEndpoint;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _EXSceneSessionConnectionResponse : NSObject <NSSecureCoding>



@property (retain) NSXPCListenerEndpoint *sceneEndpoint; // ivar: _sceneEndpoint


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif