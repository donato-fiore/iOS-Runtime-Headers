// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNBOOTSESSION_H
#define CNBOOTSESSION_H


#import <Foundation/Foundation.h>


@interface CNBootSession : NSObject



+(id)currentBootSessionUUID;
+(id)readCurrentBootSessionUUID;


@end


#endif