// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UISEGMENTEDCONTROLSPRINGLOADEDBEHAVIOR_H
#define UISEGMENTEDCONTROLSPRINGLOADEDBEHAVIOR_H

@class NSString;
@protocol UISpringLoadedInteractionBehavior;

#import <Foundation/Foundation.h>


@interface UISegmentedControlSpringLoadedBehavior : NSObject <UISpringLoadedInteractionBehavior>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)shouldAllowInteraction:(id)arg0 withContext:(id)arg1 ;


@end


#endif