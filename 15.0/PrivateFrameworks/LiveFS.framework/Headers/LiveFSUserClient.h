// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef LIVEFSUSERCLIENT_H
#define LIVEFSUSERCLIENT_H


#import <Foundation/Foundation.h>


@interface LiveFSUserClient : NSObject {
    unsigned int ourPort;
}




+(id)defaultClient;
-(id)init;
-(int)callStructMethod:(unsigned int)arg0 inStruct:(*void)arg1 inSize:(NSUInteger)arg2 outStruct:(*void)arg3 outStructSize:(*NSUInteger)arg4 ;
-(int)checkUserClientPort;
-(int)getUserClientPort;
-(int)setMainMachPort:(unsigned int)arg0 forDomain:(id)arg1 ;
-(void)dealloc;


@end


#endif