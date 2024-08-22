// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PHPERFORMCHANGESINSTRUMENTATION_H
#define PHPERFORMCHANGESINSTRUMENTATION_H

@class NSUUID;

#import <Foundation/Foundation.h>


@interface PHPerformChangesInstrumentation : NSObject {
    char * _performChangesName;
    NSUInteger _signpostId;
    CGFloat _serviceWillExecuteTimestamp;
    CGFloat _serviceIsExecutingTimestamp;
    NSUUID *_uuid;
}




-(id)init;


@end


#endif