// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSCENEVIEWSTATUSBARASSERTION_H
#define SBSCENEVIEWSTATUSBARASSERTION_H

@class NSHashTable, NSString;
@protocol BSInvalidatable;

#import <Foundation/Foundation.h>

#import "SBStatusBarSettings.h"

@interface SBSceneViewStatusBarAssertion : NSObject <BSInvalidatable>

 {
    NSHashTable *_observers;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger level; // ivar: _level
@property (nonatomic) NSInteger nubViewHidden; // ivar: _nubViewHidden
@property (copy, nonatomic) SBStatusBarSettings *settings; // ivar: _settings
@property (nonatomic, getter=isStatusBarHidden) BOOL statusBarHidden;
@property (readonly) Class superclass;


-(id)initWithStatusBarHidden:(BOOL)arg0 nubViewHidden:(NSInteger)arg1 atLevel:(NSUInteger)arg2 ;
-(id)initWithStatusBarSettings:(id)arg0 nubViewHidden:(NSInteger)arg1 atLevel:(NSUInteger)arg2 ;
-(void)_notifyObserversDidInvalidate;
-(void)_notifyObserversDidUpdate;
-(void)addObserver:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;
-(void)removeObserver:(id)arg0 ;


@end


#endif