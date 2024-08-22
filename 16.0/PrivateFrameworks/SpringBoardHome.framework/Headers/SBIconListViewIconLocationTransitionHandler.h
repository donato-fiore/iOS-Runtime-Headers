// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBICONLISTVIEWICONLOCATIONTRANSITIONHANDLER_H
#define SBICONLISTVIEWICONLOCATIONTRANSITIONHANDLER_H

@class NSString;
@protocol SBIconListViewIconLocationTransitioning, BSDescriptionProviding;

#import <Foundation/Foundation.h>

#import "SBIconListView.h"

@interface SBIconListViewIconLocationTransitionHandler : NSObject <SBIconListViewIconLocationTransitioning, BSDescriptionProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) SBIconListView *iconListView; // ivar: _iconListView
@property (readonly, copy, nonatomic) NSString *iconLocation; // ivar: _iconLocation
@property (nonatomic) CGFloat progress; // ivar: _progress
@property (readonly, copy, nonatomic) NSString *reason; // ivar: _reason
@property (readonly) Class superclass;


-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithIconLocation:(id)arg0 reason:(id)arg1 iconListView:(id)arg2 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)completeTransition:(BOOL)arg0 ;


@end


#endif