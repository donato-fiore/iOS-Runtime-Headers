// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _HDAUTHORIZATIONREQUESTGROUP_H
#define _HDAUTHORIZATIONREQUESTGROUP_H

@class NSMutableSet, NSMutableArray, HKSource, NSUUID;
@protocol OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface _HDAuthorizationRequestGroup : NSObject {
    NSMutableSet *_typesToWrite;
    NSMutableSet *_typesToRead;
    BOOL _inTransaction;
    NSMutableArray *_requests;
    NSMutableArray *_completions;
    NSObject<OS_dispatch_source> *_sessionTimeoutSource;
    HKSource *_source;
    NSUUID *_promptSessionIdentifier;
    id *_promptHandler;
}




-(id)description;


@end


#endif