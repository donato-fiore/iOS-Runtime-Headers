// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _BKSLOCALLYOWNEDTOUCHAUTHENTICATIONASSERTION_H
#define _BKSLOCALLYOWNEDTOUCHAUTHENTICATIONASSERTION_H

@class NSString;
@protocol BSInvalidatable;

#import <Foundation/Foundation.h>


@interface _BKSLocallyOwnedTouchAuthenticationAssertion : NSObject <BSInvalidatable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)invalidate;


@end


#endif