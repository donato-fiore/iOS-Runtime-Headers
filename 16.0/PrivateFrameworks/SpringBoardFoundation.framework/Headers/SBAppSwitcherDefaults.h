// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBAPPSWITCHERDEFAULTS_H
#define SBAPPSWITCHERDEFAULTS_H

@class NSArray;


#import "SBAbstractSpringBoardDefaultDomain.h"

@interface SBAppSwitcherDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic) NSUInteger bottomEdgeGestureSwipeCount;
@property (nonatomic) BOOL chamoisEverEnabled;
@property (nonatomic) BOOL chamoisHideDock;
@property (nonatomic) BOOL chamoisHideDockExternal;
@property (nonatomic) BOOL chamoisHideStrips;
@property (nonatomic) BOOL chamoisHideStripsExternal;
@property (nonatomic) BOOL chamoisWindowingEnabled;
@property (readonly, nonatomic) NSArray *legacyRecentApplications;
@property (readonly, nonatomic) NSArray *legacyRecentDisplayItemRoles;
@property (readonly, nonatomic) NSArray *legacyRecentDisplayItems;
@property (retain, nonatomic) NSArray *recentsPlistRepresentation;
@property (nonatomic) BOOL shouldShowSlideOverPeekEducation;
@property (nonatomic) BOOL shouldShowSplitPeekEducation;
@property (readonly, nonatomic, getter=isSpringBoardKillable) BOOL springBoardKillable;
@property (readonly, nonatomic, getter=areTrackpadSwitcherGesturesEnabled) BOOL trackpadSwitcherGesturesEnabled;


-(void)_bindAndRegisterDefaults;
-(void)clearLegacyDefaults;


@end


#endif