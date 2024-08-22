// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _HDOBJECTAUTHORIZATIONREQUEST_H
#define _HDOBJECTAUTHORIZATIONREQUEST_H

@class NSUUID, NSArray, HKObjectAuthorizationPromptSessionMetadata;

#import <Foundation/Foundation.h>


@interface _HDObjectAuthorizationRequest : NSObject {
    id *_completion;
    NSUUID *_identifier;
    NSArray *_samples;
    HKObjectAuthorizationPromptSessionMetadata *_metadata;
    NSArray *_authorizationRecords;
    NSUUID *_sessionIdentifier;
}






@end


#endif