// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HAPACCESSORYSERVERBROWSERINVALIDATESERVEROPERATION_H
#define HAPACCESSORYSERVERBROWSERINVALIDATESERVEROPERATION_H



#import "HAP2AsynchronousOperation.h"
#import "HAPAccessoryServerIP.h"

@interface HAPAccessoryServerBrowserInvalidateServerOperation : HAP2AsynchronousOperation

@property (retain, nonatomic) HAPAccessoryServerIP *server; // ivar: _server


-(id)initWithServer:(id)arg0 ;
-(void)main;


@end


#endif