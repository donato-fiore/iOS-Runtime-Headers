// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CDPDATAPRIVACYAPPLEACCOUNTPROXY_H
#define CDPDATAPRIVACYAPPLEACCOUNTPROXY_H

@class NSString;
@protocol CDPAppleAccountProxy;

#import <Foundation/Foundation.h>


@interface CDPDataPrivacyAppleAccountProxy : NSObject <CDPAppleAccountProxy>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)custodianAvailableWithCompletion:(id)arg0 ;


@end


#endif