// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _ASCLOCKUPRESPONSE_H
#define _ASCLOCKUPRESPONSE_H

@class NSError;

#import <Foundation/Foundation.h>

#import "ASCLockup.h"
#import "ASCLockupRequest.h"

@interface _ASCLockupResponse : NSObject

@property (readonly, copy, nonatomic) NSError *error; // ivar: _error
@property (readonly, copy, nonatomic) ASCLockup *lockup; // ivar: _lockup
@property (readonly, copy, nonatomic) ASCLockupRequest *request; // ivar: _request


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithRequest:(id)arg0 lockup:(id)arg1 error:(id)arg2 ;


@end


#endif