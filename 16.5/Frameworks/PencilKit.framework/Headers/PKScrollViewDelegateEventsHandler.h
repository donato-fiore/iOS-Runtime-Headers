// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKSCROLLVIEWDELEGATEEVENTSHANDLER_H
#define PKSCROLLVIEWDELEGATEEVENTSHANDLER_H

@class NSString;
@protocol UIScrollViewDelegate;

#import <Foundation/Foundation.h>


@interface PKScrollViewDelegateEventsHandler : NSObject <UIScrollViewDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *scrollViewDidEndScrollingAnimationHandler; // ivar: _scrollViewDidEndScrollingAnimationHandler
@property (readonly) Class superclass;


-(void)scrollViewDidEndScrollingAnimation:(id)arg0 ;


@end


#endif