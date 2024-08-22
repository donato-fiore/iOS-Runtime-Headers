// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRCARPLAYAPPBLACKLIST_H
#define CRCARPLAYAPPBLACKLIST_H

@class NSSet, NSXPCConnection;

#import <Foundation/Foundation.h>


@interface CRCarPlayAppBlacklist : NSObject

@property (retain, nonatomic) NSSet *blacklistedBundleIDs; // ivar: _blacklistedBundleIDs
@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection


-(BOOL)containsBundleIdentifier:(id)arg0 ;
-(id)_blacklistPreference;
-(id)init;
-(void)_requestBlacklistUpdate;
-(void)_setupConnection;
-(void)dealloc;


@end


#endif