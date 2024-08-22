// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SNSESSIONDESCRIPTOR_H
#define SNSESSIONDESCRIPTOR_H

@class NSString;

#import <Foundation/Foundation.h>


@interface SNSessionDescriptor : NSObject

@property (readonly, copy, nonatomic) NSString *platterTargetBundleIdentifier; // ivar: _platterTargetBundleIdentifier
@property (readonly, copy, nonatomic) NSString *sessionIdentifier; // ivar: _sessionIdentifier


-(id)initWithSessionIdentifier:(id)arg0 platterTargetBundleIdentifier:(id)arg1 ;


@end


#endif