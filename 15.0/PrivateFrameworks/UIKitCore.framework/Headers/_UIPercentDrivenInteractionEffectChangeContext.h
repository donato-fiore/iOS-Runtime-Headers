// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIPERCENTDRIVENINTERACTIONEFFECTCHANGECONTEXT_H
#define _UIPERCENTDRIVENINTERACTIONEFFECTCHANGECONTEXT_H

@class NSString;
@protocol UIInteractionContext;

#import <Foundation/Foundation.h>


@interface _UIPercentDrivenInteractionEffectChangeContext : NSObject <UIInteractionContext>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL ended; // ivar: _ended
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat maximumProgress; // ivar: _maximumProgress
@property (nonatomic) CGFloat progress; // ivar: _progress
@property (readonly) Class superclass;




@end


#endif