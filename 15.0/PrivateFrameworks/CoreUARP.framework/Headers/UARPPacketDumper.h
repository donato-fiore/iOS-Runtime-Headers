// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UARPPACKETDUMPER_H
#define UARPPACKETDUMPER_H


#import <Foundation/Foundation.h>

#import "BloodhoundPacketDumper.h"

@interface UARPPacketDumper : NSObject {
    BloodhoundPacketDumper *_bloodhoundDumper;
}




-(id)initWithFileName:(id)arg0 ;
-(void)dump:(id)arg0 accessoryID:(id)arg1 uarpStatus:(unsigned int)arg2 direction:(NSUInteger)arg3 ;


@end


#endif