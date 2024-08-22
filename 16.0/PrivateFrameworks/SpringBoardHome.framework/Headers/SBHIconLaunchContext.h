// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBHICONLAUNCHCONTEXT_H
#define SBHICONLAUNCHCONTEXT_H

@class NSString;
@protocol SBHIconLaunchContext;

#import <Foundation/Foundation.h>

#import "SBIconView.h"

@interface SBHIconLaunchContext : NSObject <SBHIconLaunchContext>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SBIconView *iconView; // ivar: _iconView
@property (readonly) Class superclass;




@end


#endif