// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _AFASSERTIONPROXY_H
#define _AFASSERTIONPROXY_H

@class NSString, NSUUID;
@protocol AFRelinquishableAssertion;

#import <Foundation/Foundation.h>

#import "_AFAssertionImpl.h"
#import "AFAssertionCoordinator.h"
#import "AFAssertionContext.h"

@interface _AFAssertionProxy : NSObject <AFRelinquishableAssertion>

 {
    _AFAssertionImpl *_impl;
    AFAssertionCoordinator *_coordinator;
}


@property (readonly, nonatomic) AFAssertionContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUUID *uuid;


-(id)initWithImpl:(id)arg0 coordinator:(id)arg1 ;
-(void)dealloc;
-(void)relinquishWithContext:(id)arg0 options:(NSUInteger)arg1 ;
-(void)relinquishWithError:(id)arg0 options:(NSUInteger)arg1 ;


@end


#endif