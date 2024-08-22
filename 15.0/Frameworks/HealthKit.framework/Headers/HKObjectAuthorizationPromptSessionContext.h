// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKOBJECTAUTHORIZATIONPROMPTSESSIONCONTEXT_H
#define HKOBJECTAUTHORIZATIONPROMPTSESSIONCONTEXT_H

@class NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "HKObjectAuthorizationPromptSessionMetadata.h"

@interface HKObjectAuthorizationPromptSessionContext : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) HKObjectAuthorizationPromptSessionMetadata *metadata; // ivar: _metadata
@property (readonly, copy, nonatomic) NSArray *samplesRequiringAuthorization; // ivar: _samplesRequiringAuthorization


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSamplesRequiringAuthorization:(id)arg0 metadata:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif