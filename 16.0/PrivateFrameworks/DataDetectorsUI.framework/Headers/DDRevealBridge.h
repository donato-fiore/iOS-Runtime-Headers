// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DDREVEALBRIDGE_H
#define DDREVEALBRIDGE_H


#import <Foundation/Foundation.h>


@interface DDRevealBridge : NSObject



+(BOOL)_revealItem:(id)arg0 view:(id)arg1 location:(struct CGPoint )arg2 menuInteraction:(id)arg3 context:(id)arg4 ;
+(BOOL)_textActionsAreAvailableForItem:(id)arg0 ;
+(BOOL)performDefaultActionForRVItem:(id)arg0 view:(id)arg1 location:(struct CGPoint )arg2 fallbackMenuInteraction:(id)arg3 context:(id)arg4 ;
+(BOOL)underlyingViewDisappeared:(id)arg0 ;
+(id)_lookupTextForText:(id)arg0 ;
+(id)contextMenuConfigurationWithRVItem:(id)arg0 view:(id)arg1 context:(id)arg2 menuIdentifier:(id)arg3 ;
+(id)updatedTextInteractionMenuElements:(id)arg0 withRVItem:(id)arg1 view:(id)arg2 context:(id)arg3 ;


@end


#endif