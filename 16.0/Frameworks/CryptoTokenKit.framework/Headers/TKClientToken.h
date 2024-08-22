// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TKCLIENTTOKEN_H
#define TKCLIENTTOKEN_H

@class NSXPCListenerEndpoint, NSString;

#import <Foundation/Foundation.h>


@interface TKClientToken : NSObject

@property (readonly, nonatomic) NSXPCListenerEndpoint *SEPKeyEndpoint; // ivar: _SEPKeyEndpoint
@property (readonly, nonatomic) NSXPCListenerEndpoint *configurationEndpoint; // ivar: _configurationEndpoint
@property (readonly, nonatomic) NSXPCListenerEndpoint *endpoint; // ivar: _endpoint
@property (readonly, nonatomic) NSString *tokenID; // ivar: _tokenID
@property (readonly, nonatomic) NSXPCListenerEndpoint *watcherEndpoint; // ivar: _watcherEndpoint


+(id)builtinTokenIDs;
-(id)_initWithTokenID:(id)arg0 ;
-(id)initWithTokenID:(id)arg0 ;
-(id)initWithTokenID:(id)arg0 serverEndpoint:(id)arg1 targetUID:(id)arg2 ;
-(id)sessionWithLAContext:(id)arg0 error:(*id)arg1 ;


@end


#endif