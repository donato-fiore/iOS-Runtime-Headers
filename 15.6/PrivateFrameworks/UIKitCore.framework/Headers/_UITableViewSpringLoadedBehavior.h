// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UITABLEVIEWSPRINGLOADEDBEHAVIOR_H
#define _UITABLEVIEWSPRINGLOADEDBEHAVIOR_H

@class NSString;
@protocol UISpringLoadedInteractionBehavior;

#import <Foundation/Foundation.h>


@interface _UITableViewSpringLoadedBehavior : NSObject <UISpringLoadedInteractionBehavior>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)shouldAllowInteraction:(id)arg0 withContext:(id)arg1 ;


@end


#endif