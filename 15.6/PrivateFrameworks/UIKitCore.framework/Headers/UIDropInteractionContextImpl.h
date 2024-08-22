// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIDROPINTERACTIONCONTEXTIMPL_H
#define UIDROPINTERACTIONCONTEXTIMPL_H

@class NSString, NSArray;
@protocol UIDropInteractionContext;

#import <Foundation/Foundation.h>


@interface UIDropInteractionContextImpl : NSObject <UIDropInteractionContext>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *items; // ivar: _items
@property (nonatomic) NSInteger state; // ivar: _state
@property (readonly) Class superclass;




@end


#endif