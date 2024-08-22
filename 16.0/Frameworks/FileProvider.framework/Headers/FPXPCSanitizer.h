// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FPXPCSANITIZER_H
#define FPXPCSANITIZER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface FPXPCSanitizer : NSObject

@property (readonly, nonatomic) NSString *providerIdentifier; // ivar: _providerIdentifier


+(id)permittedErrorDomains;
-(id)init;
-(id)initWithProviderDomainIdentifier:(id)arg0 ;


@end


#endif