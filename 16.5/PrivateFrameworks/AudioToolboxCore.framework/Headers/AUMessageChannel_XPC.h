// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AUMESSAGECHANNEL_XPC_H
#define AUMESSAGECHANNEL_XPC_H

@class NSXPCConnection;
@protocol AUMessageChannel;

#import <Foundation/Foundation.h>


@interface AUMessageChannel_XPC : NSObject <AUMessageChannel>

 {
    NSXPCConnection *_xpcConnection;
}


@property (copy, nonatomic) id *callHostBlock; // ivar: _callHostBlock


-(id)callAudioUnit:(id)arg0 ;
-(id)initWithListenerEndpoint:(id)arg0 ;
-(void)dealloc;


@end


#endif