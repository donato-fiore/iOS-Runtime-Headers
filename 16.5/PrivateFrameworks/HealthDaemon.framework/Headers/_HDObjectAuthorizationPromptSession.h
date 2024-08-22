// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _HDOBJECTAUTHORIZATIONPROMPTSESSION_H
#define _HDOBJECTAUTHORIZATIONPROMPTSESSION_H

@class NSMutableArray, NSString, NSUUID;

#import <Foundation/Foundation.h>

#import "HDProfile.h"

@interface _HDObjectAuthorizationPromptSession : NSObject {
    HDProfile *_profile;
    NSMutableArray *_requests;
    NSMutableArray *_completions;
    BOOL _didStartTransaction;
    id *_sessionCompletion;
    NSString *_bundleIdentifier;
    NSUUID *_sessionIdentifier;
}






@end


#endif