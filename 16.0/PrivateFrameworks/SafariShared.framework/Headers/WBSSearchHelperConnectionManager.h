// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSSEARCHHELPERCONNECTIONMANAGER_H
#define WBSSEARCHHELPERCONNECTIONMANAGER_H

@class NSMutableSet, NSXPCConnection;

#import <Foundation/Foundation.h>


@interface WBSSearchHelperConnectionManager : NSObject {
    NSMutableSet *_clients;
}


@property (retain, nonatomic) NSXPCConnection *searchHelperConnection; // ivar: _searchHelperConnection


+(id)sharedManager;
-(id)init;
-(id)searchHelperConnectionRequestedByClient:(id)arg0 ;
-(void)removeClient:(id)arg0 ;


@end


#endif