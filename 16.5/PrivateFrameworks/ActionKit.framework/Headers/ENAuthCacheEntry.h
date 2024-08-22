// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ENAUTHCACHEENTRY_H
#define ENAUTHCACHEENTRY_H

@class NSDate;

#import <Foundation/Foundation.h>

#import "EDAMAuthenticationResult.h"

@interface ENAuthCacheEntry : NSObject

@property (retain, nonatomic) EDAMAuthenticationResult *authResult; // ivar: _authResult
@property (retain, nonatomic) NSDate *cachedDate; // ivar: _cachedDate


+(id)entryWithResult:(id)arg0 ;
-(BOOL)isValid;


@end


#endif