// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSMESSAGEPORTNAMESERVER_H
#define NSMESSAGEPORTNAMESERVER_H



#import "NSPortNameServer.h"

@interface NSMessagePortNameServer : NSPortNameServer



+(id)sharedInstance;
-(BOOL)registerPort:(id)arg0 name:(id)arg1 ;
-(BOOL)removePortForName:(id)arg0 ;
-(id)portForName:(id)arg0 ;
-(id)portForName:(id)arg0 host:(id)arg1 ;


@end


#endif