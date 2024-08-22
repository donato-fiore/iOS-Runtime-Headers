// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EDCLIENTSTATE_H
#define EDCLIENTSTATE_H

@class NSString, NSArray;
@protocol EDClientStateReporting, EFLoggable;

#import <Foundation/Foundation.h>


@interface EDClientState : NSObject <EDClientStateReporting, EFLoggable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isForeground; // ivar: _isForeground
@property (nonatomic) BOOL isRunningTests; // ivar: _isRunningTests
@property (readonly) Class superclass;
@property (retain) NSArray *visibleMailboxesObjectIds; // ivar: _visibleMailboxesObjectIds


+(id)log;
+(id)sharedInstance;
-(id)giveBoostWithCompletionBlock:(id)arg0 ;
-(id)init;
-(void)dealloc;
-(void)setClientIsInForeground:(BOOL)arg0 ;
-(void)setClientIsRunningTests:(BOOL)arg0 ;
-(void)setCurrentlyVisibleMailboxObjectIDs:(id)arg0 ;
-(void)setStateForDemoMode:(id)arg0 ;


@end


#endif