// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBPPTSEARCHGESTUREOBSERVER_H
#define SBPPTSEARCHGESTUREOBSERVER_H

@class NSString;
@protocol SBSearchGestureObserver;

#import <Foundation/Foundation.h>


@interface SBPPTSearchGestureObserver : NSObject <SBSearchGestureObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)searchGesture:(id)arg0 changedPercentComplete:(CGFloat)arg1 ;
-(void)searchGesture:(id)arg0 completedShowing:(BOOL)arg1 ;
-(void)searchGesture:(id)arg0 startedShowing:(BOOL)arg1 ;


@end


#endif