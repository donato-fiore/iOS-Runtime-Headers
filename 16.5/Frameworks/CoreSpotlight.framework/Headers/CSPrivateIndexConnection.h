// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSPRIVATEINDEXCONNECTION_H
#define CSPRIVATEINDEXCONNECTION_H



#import "CSIndexConnection.h"

@interface CSPrivateIndexConnection : CSIndexConnection



+(id)privateIndexConnectionForToken:(id)arg0 ;
+(void)removePrivateIndexConnectionForToken:(id)arg0 ;
-(void)sendMessageAsync:(id)arg0 completion:(id)arg1 ;


@end


#endif