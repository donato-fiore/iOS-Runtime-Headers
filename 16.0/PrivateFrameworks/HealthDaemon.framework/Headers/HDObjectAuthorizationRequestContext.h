// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDOBJECTAUTHORIZATIONREQUESTCONTEXT_H
#define HDOBJECTAUTHORIZATIONREQUESTCONTEXT_H

@class HKObjectAuthorizationPromptSessionMetadata, NSArray;

#import <Foundation/Foundation.h>


@interface HDObjectAuthorizationRequestContext : NSObject

@property (readonly, copy, nonatomic) HKObjectAuthorizationPromptSessionMetadata *metadata; // ivar: _metadata
@property (nonatomic) BOOL persistSession; // ivar: _persistSession
@property (nonatomic) BOOL promptWithAllSamples; // ivar: _promptWithAllSamples
@property (nonatomic) BOOL promptWithNoSamples; // ivar: _promptWithNoSamples
@property (readonly, copy, nonatomic) NSArray *samples; // ivar: _samples


-(id)initWithSamples:(id)arg0 metadata:(id)arg1 ;


@end


#endif