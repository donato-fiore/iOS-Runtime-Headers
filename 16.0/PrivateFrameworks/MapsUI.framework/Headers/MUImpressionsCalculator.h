// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MUIMPRESSIONSCALCULATOR_H
#define MUIMPRESSIONSCALCULATOR_H

@class NSString, UIScrollView, NSUUID, NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "MUImpressionsCalculatorConfiguration.h"

@interface MUImpressionsCalculator : NSObject

@property (nonatomic, getter=isActive) BOOL active; // ivar: _active
@property (readonly, nonatomic) MUImpressionsCalculatorConfiguration *configuration; // ivar: _configuration
@property (readonly, nonatomic) NSString *debugState;
@property (readonly, nonatomic) BOOL hasImpressionElements;
@property (copy, nonatomic) id *observerBlock; // ivar: _observerBlock
@property (readonly, weak, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) NSUUID *sessionIdentifier; // ivar: _sessionIdentifier
@property (readonly, nonatomic) NSMutableDictionary *uiElementsByIdentifiers; // ivar: _uiElementsByIdentifiers


-(id)_uiElementForIdentifier:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 ;
-(void)_checkVisibilityForAllItemsOnDate:(id)arg0 ;
-(void)_checkVisibilityForElement:(id)arg0 onDate:(id)arg1 ;
-(void)_didEnterBackground:(id)arg0 ;
-(void)_handleNotification:(id)arg0 withProposedActiveState:(BOOL)arg1 ;
-(void)_logEnterForImpressionUIElement:(id)arg0 usingStartDate:(id)arg1 ;
-(void)_logExitForImpressionUIElement:(id)arg0 usingExitDate:(id)arg1 ;
-(void)_logWorkingSetWithDidBecomeVisible:(BOOL)arg0 ;
-(void)_registerForBackgroundingNotifications;
-(void)_willEnterForeground:(id)arg0 ;


@end


#endif