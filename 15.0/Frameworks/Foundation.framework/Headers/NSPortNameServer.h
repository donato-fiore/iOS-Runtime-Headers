// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSPORTNAMESERVER_H
#define NSPORTNAMESERVER_H


#import <Foundation/Foundation.h>


@interface NSPortNameServer : NSObject



+(id)defaultPortNameServer;
+(id)systemDefaultPortNameServer;
-(BOOL)registerPort:(id)arg0 forName:(id)arg1 ;
-(BOOL)registerPort:(id)arg0 name:(id)arg1 ;
-(BOOL)removePortForName:(id)arg0 ;
-(id)portForName:(id)arg0 ;
-(id)portForName:(id)arg0 host:(id)arg1 ;
-(id)portForName:(id)arg0 onHost:(id)arg1 ;


@end


#endif