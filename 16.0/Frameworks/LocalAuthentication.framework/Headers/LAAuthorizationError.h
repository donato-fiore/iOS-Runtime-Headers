// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LAAUTHORIZATIONERROR_H
#define LAAUTHORIZATIONERROR_H


#import <Foundation/Foundation.h>


@interface LAAuthorizationError : NSObject



+(BOOL)isResourceNotFoundError:(id)arg0 ;
+(id)genericErrorWithMessage:(id)arg0 ;
+(id)genericErrorWithStatus:(int)arg0 ;
+(id)missingImplementation;
+(id)resourceNotFound;
+(id)resourceNotFoundWithMessage:(id)arg0 ;
+(id)resourceNotFoundWithUnderylingError:(id)arg0 ;


@end


#endif