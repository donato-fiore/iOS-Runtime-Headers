// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DDREVEALBRIDGE_H
#define DDREVEALBRIDGE_H


#import <Foundation/Foundation.h>


@interface DDRevealBridge : NSObject



+(BOOL)_revealItem:(id)arg0 view:(id)arg1 location:(struct CGPoint )arg2 menuInteraction:(id)arg3 context:(id)arg4 ;
+(BOOL)performDefaultActionForRVItem:(id)arg0 view:(id)arg1 location:(struct CGPoint )arg2 fallbackMenuInteraction:(id)arg3 context:(id)arg4 ;
+(BOOL)underlyingViewDisappeared:(id)arg0 ;
+(id)contextMenuConfigurationWithRVItem:(id)arg0 view:(id)arg1 context:(id)arg2 menuIdentifier:(id)arg3 ;


@end


#endif