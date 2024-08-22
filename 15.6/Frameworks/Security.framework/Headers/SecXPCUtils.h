// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SECXPCUTILS_H
#define SECXPCUTILS_H


#import <Foundation/Foundation.h>


@interface SecXPCUtils : NSObject



+(BOOL)clientCanEditPreferenceOwnership;
+(struct __CFString *)copyApplicationIdentifier;
+(struct __CFString *)copyApplicationIdentifierFromConnection:(id)arg0 ;
+(struct __CFString *)copyApplicationIdentifierFromSelf;
+(struct __CFString *)copySigningIdentifier:(id)arg0 ;


@end


#endif