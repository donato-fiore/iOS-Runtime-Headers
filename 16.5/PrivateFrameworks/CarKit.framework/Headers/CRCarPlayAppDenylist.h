// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRCARPLAYAPPDENYLIST_H
#define CRCARPLAYAPPDENYLIST_H

@class NSXPCConnection, NSSet;

#import <Foundation/Foundation.h>


@interface CRCarPlayAppDenylist : NSObject

@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (retain, nonatomic) NSSet *denylistedBundleIDs; // ivar: _denylistedBundleIDs


-(BOOL)containsBundleIdentifier:(id)arg0 ;
-(id)_denylistPreference;
-(id)init;
-(void)_requestDenylistUpdate;
-(void)_setupConnection;
-(void)dealloc;


@end


#endif