// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUFAKEXPCCLIENT_H
#define HUFAKEXPCCLIENT_H

@class HCXPCClient;



@interface HUFakeXPCClient : HCXPCClient {
    id *_updateBlock;
}




-(BOOL)sendMessage:(id)arg0 errorBlock:(id)arg1 ;
-(BOOL)wantsUpdatesForIdentifier:(NSUInteger)arg0 ;
-(void)registerMessageBlock:(id)arg0 ;


@end


#endif