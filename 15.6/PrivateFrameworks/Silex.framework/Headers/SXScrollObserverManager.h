// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXSCROLLOBSERVERMANAGER_H
#define SXSCROLLOBSERVERMANAGER_H

@class NSString, NSHashTable;
@protocol SXScrollObserverManager, SXScrollReporting;

#import <Foundation/Foundation.h>


@interface SXScrollObserverManager : NSObject <SXScrollObserverManager, SXScrollReporting>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSHashTable *observers; // ivar: _observers
@property (nonatomic) BOOL scrolling; // ivar: _scrolling
@property (readonly) Class superclass;


-(id)init;
-(void)addScrollObserver:(id)arg0 ;
-(void)didScroll;
-(void)didStopScrolling;
-(void)removeScrollObserver:(id)arg0 ;
-(void)willStartScrolling;


@end


#endif