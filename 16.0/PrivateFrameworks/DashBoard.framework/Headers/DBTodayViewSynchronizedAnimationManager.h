// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DBTODAYVIEWSYNCHRONIZEDANIMATIONMANAGER_H
#define DBTODAYVIEWSYNCHRONIZEDANIMATIONMANAGER_H

@class NSMutableDictionary, NSString;
@protocol BSInvalidatable;

#import <Foundation/Foundation.h>


@interface DBTodayViewSynchronizedAnimationManager : NSObject <BSInvalidatable>



@property (retain, nonatomic) NSMutableDictionary *animationsByIdentifier; // ivar: _animationsByIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)invalidate;
-(void)registerAnimation:(id)arg0 client:(id)arg1 animation:(id)arg2 ;
-(void)runAnimationIfPossible:(id)arg0 client:(id)arg1 ;


@end


#endif