// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SSSILENTENROLLMENT_H
#define SSSILENTENROLLMENT_H

@class NSString;
@protocol SSXPCCoding;


#import "SSRequest.h"
#import "SSSilentEnrollmentContext.h"

@interface SSSilentEnrollment : SSRequest <SSXPCCoding>



@property (retain) SSSilentEnrollmentContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)copyXPCEncoding;
-(id)initWithSilentEnrollmentContext:(id)arg0 ;
-(id)initWithXPCEncoding:(id)arg0 ;


@end


#endif