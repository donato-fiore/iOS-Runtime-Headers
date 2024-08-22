// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MOXPCCLIENT_H
#define MOXPCCLIENT_H


#import <Foundation/Foundation.h>


@interface MOXPCClient : NSObject



+(id)sharedInstance;
-(id)createMOServerConnection;
-(id)mobileObliterate:(id)arg0 ;


@end


#endif