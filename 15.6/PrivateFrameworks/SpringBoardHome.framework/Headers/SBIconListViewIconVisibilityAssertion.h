// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBICONLISTVIEWICONVISIBILITYASSERTION_H
#define SBICONLISTVIEWICONVISIBILITYASSERTION_H

@class NSString;
@protocol BSInvalidatable, BSDescriptionProviding;

#import <Foundation/Foundation.h>

#import "SBIconListView.h"

@interface SBIconListViewIconVisibilityAssertion : NSObject <BSInvalidatable, BSDescriptionProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isInvalidated) BOOL invalidated; // ivar: _invalidated
@property (readonly, nonatomic) SBIconListView *listView; // ivar: _listView
@property (readonly, copy, nonatomic) NSString *reason; // ivar: _reason
@property (readonly) Class superclass;


-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithListView:(id)arg0 reason:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)dealloc;
-(void)invalidate;


@end


#endif