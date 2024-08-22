// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SUSFOLLOWUPCONTROLLER_H
#define SUSFOLLOWUPCONTROLLER_H

@class FLFollowUpController;

#import <Foundation/Foundation.h>


@interface SUSFollowUpController : NSObject

@property (retain, nonatomic) FLFollowUpController *followUpController; // ivar: _followUpController


+(id)sharedController;
+(id)stringForSUSFollowUpType:(NSUInteger)arg0 ;
-(BOOL)_isCurrentlyPresentingFollowUpType:(NSUInteger)arg0 currentFollowUps:(id)arg1 ;
-(BOOL)isBadgeOnlyFollowUpCurrentlyBeingPresented;
-(BOOL)isCurrentlyPresentingFollowUpType:(NSUInteger)arg0 ;
-(BOOL)isCurrentlyPresentingFollowUpTypes:(id)arg0 presentationOption:(NSUInteger)arg1 ;
-(BOOL)isfollowUpSUSRelated:(id)arg0 ;
-(id)getCurrentSUSFollowUpItems;
-(id)identifierForSUFollowUpType:(NSUInteger)arg0 ;
-(id)identifiersForSUFollowUpTypes:(id)arg0 ;
-(id)init;
-(void)SUSFollowUpControllerBadgeSettings:(id)arg0 ;
-(void)SUSFollowUpControllerUnbadgeSettings;
-(void)dealloc;
-(void)dismissAllSUFollowUps;
-(void)dismissFollowUpType:(NSUInteger)arg0 ;
-(void)dismissFollowUpTypes:(id)arg0 ;
-(void)dismissFollowUpWithIdentifiers:(id)arg0 ;
-(void)dismissLegacyFollowUps;
-(void)postFollowUpItem:(id)arg0 ;
-(void)postFollowUpOfType:(NSUInteger)arg0 withUpdate:(id)arg1 ;


@end


#endif