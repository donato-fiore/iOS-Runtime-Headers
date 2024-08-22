// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _WFINVALIDATEDSTATE_H
#define _WFINVALIDATEDSTATE_H

@class NSString;
@protocol WFState;

#import <Foundation/Foundation.h>


@interface _WFInvalidatedState : NSObject <WFState>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)canTransitionToState:(id)arg0 ;


@end


#endif