// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TKEXTENSIONCLIENTTOKEN_H
#define TKEXTENSIONCLIENTTOKEN_H

@class NSXPCListenerEndpoint, NSXPCConnection, NSNumber;


#import "TKClientToken.h"

@interface TKExtensionClientToken : TKClientToken {
    NSXPCListenerEndpoint *_serverEndpoint;
    NSXPCConnection *_serverConnection;
    BOOL _namedConnection;
    NSNumber *_targetUID;
    NSInteger _connectionIdentifier;
}


@property (readonly, nonatomic) NSXPCConnection *serverConnection;
@property (readonly, nonatomic) NSXPCConnection *tokenConnection; // ivar: _tokenConnection


+(id)builtinTokenIDs;
-(BOOL)ensureConnectionWithError:(*id)arg0 ;
-(id)SEPKeyEndpoint;
-(id)configurationEndpoint;
-(id)endpoint;
-(id)initWithTokenID:(id)arg0 serverEndpoint:(id)arg1 targetUID:(id)arg2 ;
-(id)watcherEndpoint;
-(id)withError:(*id)arg0 invoke:(id)arg1 ;
-(void)dealloc;


@end


#endif