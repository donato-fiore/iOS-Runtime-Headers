// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSMACHBOOTSTRAPSERVER_H
#define NSMACHBOOTSTRAPSERVER_H



#import "NSPortNameServer.h"

@interface NSMachBootstrapServer : NSPortNameServer



+(id)sharedInstance;
-(BOOL)registerPort:(id)arg0 name:(id)arg1 ;
-(BOOL)removePortForName:(id)arg0 ;
-(id)portForName:(id)arg0 ;
-(id)portForName:(id)arg0 host:(id)arg1 ;
-(id)portForName:(id)arg0 options:(NSUInteger)arg1 ;
-(id)servicePortWithName:(id)arg0 ;


@end


#endif