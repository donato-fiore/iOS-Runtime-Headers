// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUTILINGLAYOUTTRANSITIONCONTEXT_H
#define PUTILINGLAYOUTTRANSITIONCONTEXT_H

@protocol OS_dispatch_group;

#import <Foundation/Foundation.h>


@interface PUTilingLayoutTransitionContext : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_group> *displayedContentUpdateGroup; // ivar: _displayedContentUpdateGroup
@property (nonatomic, setter=setCancelingTransition:) BOOL isCancelingTransition; // ivar: _isCancelingTransition
@property (nonatomic) BOOL isUpdatingDisplayedContent; // ivar: _isUpdatingDisplayedContent
@property (nonatomic) BOOL isViewControllerTransition; // ivar: _isViewControllerTransition




@end


#endif