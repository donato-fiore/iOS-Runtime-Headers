// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNAUTHORIZATIONCONTEXTTESTDOUBLE_H
#define CNAUTHORIZATIONCONTEXTTESTDOUBLE_H

@class NSString;
@protocol CNAuthorizationContext;

#import <Foundation/Foundation.h>


@interface CNAuthorizationContextTestDouble : NSObject <CNAuthorizationContext>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property BOOL isNotesAccessGranted; // ivar: _isNotesAccessGranted
@property (readonly) Class superclass;




@end


#endif