// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ACACTIVITYDESCRIPTOR_H
#define ACACTIVITYDESCRIPTOR_H

@class NSString;

#import <Foundation/Foundation.h>

#import "ACActivityPresentationOptions.h"

@interface ACActivityDescriptor : NSObject

@property (copy, nonatomic) NSString *activityIdentifier; // ivar: _activityIdentifier
@property (nonatomic) BOOL isEphemeral; // ivar: _isEphemeral
@property (copy, nonatomic) NSString *platterTargetBundleIdentifier; // ivar: _platterTargetBundleIdentifier
@property (retain, nonatomic) ACActivityPresentationOptions *presentationOptions; // ivar: _presentationOptions


-(id)initWithIdentifier:(id)arg0 target:(id)arg1 presentationOptions:(id)arg2 isEphemeral:(BOOL)arg3 ;


@end


#endif