// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CSLIFEFSCONNECTION_H
#define CSLIFEFSCONNECTION_H



#import "CSXPCConnection.h"

@interface CSLifeFSConnection : CSXPCConnection



+(id)sharedConnection;
-(void)handleError:(id)arg0 ;
-(void)sendMessageAsync:(id)arg0 completion:(id)arg1 ;


@end


#endif