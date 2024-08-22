// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SANEWTHREADINFO_H
#define SANEWTHREADINFO_H


#import <Foundation/Foundation.h>

#import "SATimestamp.h"

@interface SANewThreadInfo : NSObject {
    int _oldPid;
    int _newPid;
    SATimestamp *_timestamp;
    NSUInteger _newTid;
}




-(id)debugDescription;


@end


#endif