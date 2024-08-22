// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NWCONCRETE_NW_AUTHENTICATION_CHALLENGE_H
#define NWCONCRETE_NW_AUTHENTICATION_CHALLENGE_H

@class NSString;
@protocol OS_nw_authentication_challenge;

#import <Foundation/Foundation.h>

#import "NWConcrete_nw_authentication_protection_space.h"

@interface NWConcrete_nw_authentication_challenge : NSObject <OS_nw_authentication_challenge>

 {
    NWConcrete_nw_authentication_protection_space *protection_space;
    *void http_message;
    int type;
    unsigned int attempt_count;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)dealloc;


@end


#endif