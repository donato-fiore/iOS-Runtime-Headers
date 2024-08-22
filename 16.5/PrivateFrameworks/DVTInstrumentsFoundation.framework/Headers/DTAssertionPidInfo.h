// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DTASSERTIONPIDINFO_H
#define DTASSERTIONPIDINFO_H

@class NSMutableSet, NSArray;

#import <Foundation/Foundation.h>


@interface DTAssertionPidInfo : NSObject {
    NSMutableSet *_clientsWithClaim;
}


@property (readonly) NSArray *blocks; // ivar: _blocks
@property (readonly) int pid; // ivar: _pid


-(BOOL)hasNoMoreClients;
-(BOOL)removeClaimFromClient:(id)arg0 ;
-(id)initForPid:(int)arg0 withRemoveBlocks:(id)arg1 onBehalfOfClient:(id)arg2 ;
-(void)addClaimForClient:(id)arg0 ;
-(void)removeAssertions;


@end


#endif