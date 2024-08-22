// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC20GAMECENTERFOUNDATION33GKMATCHBACKGROUNDASSERTIONMANAGER_H
#define _TTC20GAMECENTERFOUNDATION33GKMATCHBACKGROUNDASSERTIONMANAGER_H

@class RBSAssertion;
@protocol RBSAssertionObserving;

#import <Foundation/Foundation.h>


@interface _TtC20GameCenterFoundation33GKMatchBackgroundAssertionManager : NSObject <RBSAssertionObserving>



@property (nonatomic, retain) RBSAssertion *activeAssertion; // ivar: activeAssertion


+(id)shared;
-(id)init;
-(void)acquire;
-(void)assertionWillInvalidate:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;


@end


#endif