// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _SFNAVIGATIONINTENTBUILDER_H
#define _SFNAVIGATIONINTENTBUILDER_H


#import <Foundation/Foundation.h>


@interface _SFNavigationIntentBuilder : NSObject

@property (readonly, nonatomic) NSInteger modifierFlags; // ivar: _modifierFlags
@property (nonatomic) NSInteger navigationType; // ivar: _navigationType
@property (nonatomic) NSUInteger neverPromptWhenOpeningMultipleIntents; // ivar: _neverPromptWhenOpeningMultipleIntents
@property (nonatomic) NSInteger preferredTabOrder; // ivar: _preferredTabOrder
@property (nonatomic) BOOL prefersOpenInNewTab; // ivar: _prefersOpenInNewTab
@property (nonatomic) BOOL prefersOpenInNewWindow; // ivar: _prefersOpenInNewWindow
@property (nonatomic) BOOL prefersRelationToSourceTab; // ivar: _prefersRelationToSourceTab


+(BOOL)canCreateNavigationIntentForDropSession:(id)arg0 ;
+(id)builder;
+(id)builderWithModifierFlags:(NSInteger)arg0 ;
+(void)registerBookmarkCollectionFactory:(id)arg0 ;
-(BOOL)_hasModifierFlag:(NSInteger)arg0 ;
-(BOOL)_modifiersEqualToModifierIgnoringCapsLock:(NSInteger)arg0 ;
-(BOOL)_shouldOrderToForeground;
-(NSInteger)_navigationPolicy;
-(NSInteger)_navigationPolicyForCreatingNewTabOrWindow;
-(NSInteger)_navigationPolicyForNavigationEvent;
-(NSInteger)_navigationPolicyForStandardEvent;
-(id)_initWithModifierFlags:(NSInteger)arg0 ;
-(id)_initializeNavigationIntentWithType:(NSUInteger)arg0 value:(id)arg1 ;
-(id)_navigationIntentForMKMapItem:(id)arg0 ;
-(id)_navigationIntentWithItems:(id)arg0 ;
-(id)navigationIntentWithBookmark:(id)arg0 ;
-(id)navigationIntentWithCloudTab:(id)arg0 ;
-(id)navigationIntentWithHighlight:(id)arg0 ;
-(id)navigationIntentWithHistoryURL:(id)arg0 ;
-(id)navigationIntentWithMultipleIntents:(id)arg0 ;
-(id)navigationIntentWithOpenURLContexts:(id)arg0 ;
-(id)navigationIntentWithRecentlyClosedTabStateData:(id)arg0 ;
-(id)navigationIntentWithSearchText:(id)arg0 ;
-(id)navigationIntentWithText:(id)arg0 ;
-(id)navigationIntentWithURL:(id)arg0 ;
-(void)buildNavigationIntentForDropSession:(id)arg0 completionHandler:(id)arg1 ;
-(void)buildNavigationIntentForItemProviders:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif