// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MOCKBROWSERSAVEDSTATE_H
#define MOCKBROWSERSAVEDSTATE_H

@class SFBrowserSavedState, NSString;



@interface MockBrowserSavedState : SFBrowserSavedState

@property (copy, nonatomic) NSString *initalURLString; // ivar: _initalURLString
@property (nonatomic) NSUInteger tabsCount; // ivar: _tabsCount


-(BOOL)activeDocumentIsValidForBrowserControllerWithUUID:(id)arg0 ;
-(id)savedTabsStateForBrowserControllerWithUUID:(id)arg0 ;
-(id)savedTabsStateForBrowserControllerWithUUID:(id)arg0 initialURLString:(id)arg1 ;


@end


#endif