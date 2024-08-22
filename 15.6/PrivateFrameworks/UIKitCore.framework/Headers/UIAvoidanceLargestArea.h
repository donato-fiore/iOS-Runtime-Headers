// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIAVOIDANCELARGESTAREA_H
#define UIAVOIDANCELARGESTAREA_H

@class NSString;
@protocol UIAvoidanceClientDelegate;

#import <Foundation/Foundation.h>


@interface UIAvoidanceLargestArea : NSObject <UIAvoidanceClientDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)avoid:(id)arg0 forClient:(id)arg1 withCoordinator:(id)arg2 ;


@end


#endif