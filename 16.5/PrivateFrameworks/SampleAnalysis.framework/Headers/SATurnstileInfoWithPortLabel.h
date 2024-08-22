// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SATURNSTILEINFOWITHPORTLABEL_H
#define SATURNSTILEINFOWITHPORTLABEL_H

@class NSString;


#import "SATurnstileInfo.h"

@interface SATurnstileInfoWithPortLabel : SATurnstileInfo {
    NSString *_portName;
    unsigned short _portFlags;
    unsigned char _portDomain;
}


@property NSUInteger portDomain;
@property NSUInteger portFlags;
@property (retain) NSString *portName;


-(id)initWithKCDataTurnstileInfo:(struct stackshot_thread_turnstileinfo_v2 *)arg0 ;


@end


#endif