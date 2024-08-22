// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WLKRESTRICTIONSOBSERVER_H
#define WLKRESTRICTIONSOBSERVER_H

@class NSNumber, NSString;
@protocol MCProfileConnectionObserver;

#import <Foundation/Foundation.h>

#import "WLKDebouncingQueue.h"

@interface WLKRestrictionsObserver : NSObject <MCProfileConnectionObserver>



@property (retain, nonatomic) NSNumber *TVRanking; // ivar: _TVRanking
@property (retain, nonatomic) WLKDebouncingQueue *debounceQueue; // ivar: _debounceQueue
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSNumber *movieRanking; // ivar: _movieRanking
@property (readonly) Class superclass;


+(id)sharedObserver;
-(id)init;
-(void)_evaluateRestrictionsChange;
-(void)dealloc;
-(void)profileConnectionDidReceiveRestrictionChangedNotification:(id)arg0 userInfo:(id)arg1 ;


@end


#endif