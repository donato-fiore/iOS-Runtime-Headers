// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _HDAUTHORIZATIONREQUEST_H
#define _HDAUTHORIZATIONREQUEST_H

@class NSUUID, NSSet;

#import <Foundation/Foundation.h>


@interface _HDAuthorizationRequest : NSObject {
    id *_completionHandler;
    NSUUID *_identifier;
    NSSet *_typesToWrite;
    NSSet *_typesToRead;
}




-(id)description;


@end


#endif