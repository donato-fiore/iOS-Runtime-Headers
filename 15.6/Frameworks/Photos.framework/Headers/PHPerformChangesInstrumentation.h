// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHPERFORMCHANGESINSTRUMENTATION_H
#define PHPERFORMCHANGESINSTRUMENTATION_H

@class NSUUID;

#import <Foundation/Foundation.h>


@interface PHPerformChangesInstrumentation : NSObject {
    char * _performChangesName;
    NSUInteger _signpostId;
    NSUUID *_uuid;
}




-(id)init;


@end


#endif