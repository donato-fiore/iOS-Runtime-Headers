// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAWAITINFOWITHPORTLABEL_H
#define SAWAITINFOWITHPORTLABEL_H

@class NSString;


#import "SAWaitInfo.h"

@interface SAWaitInfoWithPortLabel : SAWaitInfo {
    NSString *_portName;
    unsigned short _portFlags;
    unsigned char _portDomain;
}


@property NSUInteger portDomain;
@property NSUInteger portFlags;
@property (retain) NSString *portName;


-(id)initWithKCDataWaitInfo:(struct stackshot_thread_waitinfo_v2 *)arg0 ;


@end


#endif