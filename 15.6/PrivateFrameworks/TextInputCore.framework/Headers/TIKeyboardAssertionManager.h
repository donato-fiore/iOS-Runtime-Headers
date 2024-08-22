// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TIKEYBOARDASSERTIONMANAGER_H
#define TIKEYBOARDASSERTIONMANAGER_H

@class NSHashTable, NSString;
@protocol TIKeyboardAssertionManaging, TIKeyboardAssertionManagerDelegate;

#import <Foundation/Foundation.h>


@interface TIKeyboardAssertionManager : NSObject <TIKeyboardAssertionManaging>



@property (readonly, nonatomic) NSHashTable *assertions; // ivar: _assertions
@property (nonatomic) NSInteger backgroundActivityAssertions; // ivar: _backgroundActivityAssertions
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<TIKeyboardAssertionManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasAssertions; // ivar: _hasAssertions
@property (nonatomic) BOOL hasBackgroundActivityAssertions; // ivar: _hasBackgroundActivityAssertions
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL pendingUpdate; // ivar: _pendingUpdate
@property (readonly) Class superclass;


+(id)sharedAssertionManager;
+(id)singletonInstance;
+(void)setSharedAssertionManager:(id)arg0 ;
-(id)init;
-(void)addAssertionForObject:(id)arg0 ;
-(void)performBackgroundActivityUpdate;
-(void)performUpdate;
-(void)releaseBackgroundActivityAssertion;
-(void)removeAssertionForObject:(id)arg0 ;
-(void)retainBackgroundActivityAssertion;
-(void)scheduleUpdate;


@end


#endif