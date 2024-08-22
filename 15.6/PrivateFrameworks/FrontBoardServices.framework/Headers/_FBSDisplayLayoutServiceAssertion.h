// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _FBSDISPLAYLAYOUTSERVICEASSERTION_H
#define _FBSDISPLAYLAYOUTSERVICEASSERTION_H

@class NSString;
@protocol BSInvalidatable;

#import <Foundation/Foundation.h>

#import "_FBSDisplayLayoutService.h"
#import "FBSDisplayLayout.h"

@interface _FBSDisplayLayoutServiceAssertion : NSObject <BSInvalidatable>

 {
    os_unfair_lock_s _lock;
    _FBSDisplayLayoutService *_lock_service;
}


@property (readonly, nonatomic) FBSDisplayLayout *currentLayout;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)initWithEndpoint:(id)arg0 qos:(char)arg1 observer:(id)arg2 ;
-(void)dealloc;
-(void)invalidate;


@end


#endif