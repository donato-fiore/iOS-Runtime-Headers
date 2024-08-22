// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CSINDEXCONNECTION_H
#define CSINDEXCONNECTION_H



#import "CSXPCConnection.h"

@interface CSIndexConnection : CSXPCConnection

@property (readonly, nonatomic) BOOL previouslyInitialized; // ivar: _previouslyInitialized


+(id)sharedConnection;
-(void)handleError:(id)arg0 ;
-(void)sendMessageAsync:(id)arg0 completion:(id)arg1 ;


@end


#endif