// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKVDONATESANDBOXAUTHORIZATION_H
#define CKVDONATESANDBOXAUTHORIZATION_H

@class NSString;
@protocol CKVDonateAuthorization;

#import <Foundation/Foundation.h>


@interface CKVDonateSandboxAuthorization : NSObject <CKVDonateAuthorization>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isItemClassWhitelisted:(Class)arg0 forOriginApp:(id)arg1 ;


@end


#endif