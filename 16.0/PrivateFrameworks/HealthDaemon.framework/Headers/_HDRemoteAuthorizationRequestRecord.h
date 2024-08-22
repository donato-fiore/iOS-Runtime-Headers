// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _HDREMOTEAUTHORIZATIONREQUESTRECORD_H
#define _HDREMOTEAUTHORIZATIONREQUESTRECORD_H

@class NSString, NSError, NSMutableArray;

#import <Foundation/Foundation.h>


@interface _HDRemoteAuthorizationRequestRecord : NSObject {
    BOOL _didRecieveShouldPrompt;
    BOOL _shouldPrompt;
    NSString *_bundleID;
    NSString *_hostAppName;
    NSError *_shouldPromptError;
    NSMutableArray *_records;
}






@end


#endif