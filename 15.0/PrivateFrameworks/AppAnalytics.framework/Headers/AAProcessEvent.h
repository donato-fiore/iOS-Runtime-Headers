// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AAPROCESSEVENT_H
#define AAPROCESSEVENT_H

@class NSString;

#import <Foundation/Foundation.h>

#import "AAJSON.h"

@interface AAProcessEvent : NSObject {
    ? name;
    ? version;
    ? groupName;
}


@property (nonatomic, readonly) NSString *groupName;
@property (nonatomic, readonly) AAJSON *json; // ivar: json
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *version;


-(id)init;


@end


#endif