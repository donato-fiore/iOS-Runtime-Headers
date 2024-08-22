// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TKEXTENSIONCLIENTTOKENSESSION_H
#define TKEXTENSIONCLIENTTOKENSESSION_H

@class NSArray, NSNumber;


#import "TKClientTokenSession.h"

@interface TKExtensionClientTokenSession : TKClientTokenSession {
    NSInteger _connectionIdentifier;
    NSArray *_advertisedItems;
}


@property (readonly, nonatomic) NSNumber *sessionID; // ivar: _sessionID


-(BOOL)ensureSessionWithClient:(id)arg0 connectionIdentifier:(NSInteger)arg1 error:(*id)arg2 ;
-(BOOL)evaluateAccessControl:(id)arg0 forOperation:(id)arg1 error:(*id)arg2 ;
-(BOOL)isValidWithError:(*id)arg0 ;
-(id)advertisedItems;
-(id)certificates;
-(id)createObjectWithAttributes:(id)arg0 error:(*id)arg1 ;
-(id)identities;
-(id)initWithToken:(id)arg0 LAContext:(id)arg1 parameters:(id)arg2 error:(*id)arg3 ;
-(id)itemsOfClass:(id)arg0 ;
-(id)keys;
-(id)objectForObjectID:(id)arg0 error:(*id)arg1 ;
-(id)withError:(*id)arg0 accessControl:(struct __SecAccessControl *)arg1 invoke:(id)arg2 ;
-(void)dealloc;
-(void)terminate;


@end


#endif