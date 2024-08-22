// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVDEFAULTBEHAVIORCONTEXT_H
#define AVDEFAULTBEHAVIORCONTEXT_H

@class NSString;
@protocol AVBehaviorContext;

#import <Foundation/Foundation.h>

#import "AVPlayerViewController.h"

@interface AVDefaultBehaviorContext : NSObject <AVBehaviorContext>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) AVPlayerViewController *playerViewController; // ivar: _playerViewController
@property (readonly) Class superclass;


-(id)initWithAVKitOwner:(id)arg0 ;


@end


#endif