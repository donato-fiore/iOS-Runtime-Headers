// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNUIUSERACTIONITEM_H
#define CNUIUSERACTIONITEM_H

@class NSDictionary, NSString, CNContactProperty;

#import <Foundation/Foundation.h>


@interface CNUIUserActionItem : NSObject

@property (readonly, copy, nonatomic) NSDictionary *associatedRecentContactMetadata; // ivar: _associatedRecentContactMetadata
@property (readonly, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, nonatomic) CNContactProperty *contactProperty; // ivar: _contactProperty
@property (readonly, nonatomic) NSInteger group; // ivar: _group
@property (readonly, nonatomic) BOOL isSuggested;
@property (retain, nonatomic) NSString *label; // ivar: _label
@property (readonly, nonatomic) NSUInteger options; // ivar: _options
@property (readonly, nonatomic) NSString *sanitizedTargetHandle;
@property (readonly, nonatomic) BOOL shouldCurateIfPerformed;
@property (readonly, nonatomic) BOOL shouldGroupByBundleIdentifier;
@property (readonly, nonatomic) BOOL shouldPromoteLoneActionToBeDefault;
@property (readonly, nonatomic) NSString *targetHandle;
@property (copy, nonatomic) NSString *teamIdentifier; // ivar: _teamIdentifier
@property (readonly, nonatomic) NSString *type; // ivar: _type


+(id)_voiceItemWithLabel:(id)arg0 targetStringValue:(id)arg1 propertyKey:(id)arg2 dialRequest:(id)arg3 bundleIdentifier:(id)arg4 group:(NSInteger)arg5 options:(NSUInteger)arg6 ;
+(id)_voiceItemWithLabel:(id)arg0 targetStringValue:(id)arg1 propertyKey:(id)arg2 userActivity:(id)arg3 bundleIdentifier:(id)arg4 group:(NSInteger)arg5 options:(NSUInteger)arg6 ;
+(id)actionItemForContactProperty:(id)arg0 actionType:(id)arg1 bundleIdentifier:(id)arg2 ;
+(id)actionItemForContactProperty:(id)arg0 actionType:(id)arg1 bundleIdentifier:(id)arg2 callProviderManager:(id)arg3 ;
+(id)emailItemWithLabel:(id)arg0 targetStringValue:(id)arg1 url:(id)arg2 bundleIdentifier:(id)arg3 ;
+(id)emailItemWithLabel:(id)arg0 targetStringValue:(id)arg1 userActivity:(id)arg2 bundleIdentifier:(id)arg3 ;
+(id)itemWithType:(id)arg0 contactProperty:(id)arg1 bundleIdentifier:(id)arg2 dialRequest:(id)arg3 group:(NSInteger)arg4 options:(NSUInteger)arg5 ;
+(id)itemWithType:(id)arg0 contactProperty:(id)arg1 bundleIdentifier:(id)arg2 dialRequest:(id)arg3 isSuggested:(BOOL)arg4 options:(NSUInteger)arg5 ;
+(id)itemWithType:(id)arg0 contactProperty:(id)arg1 bundleIdentifier:(id)arg2 url:(id)arg3 group:(NSInteger)arg4 options:(NSUInteger)arg5 ;
+(id)itemWithType:(id)arg0 contactProperty:(id)arg1 bundleIdentifier:(id)arg2 url:(id)arg3 isSensitive:(BOOL)arg4 group:(NSInteger)arg5 options:(NSUInteger)arg6 ;
+(id)itemWithType:(id)arg0 contactProperty:(id)arg1 bundleIdentifier:(id)arg2 userActivity:(id)arg3 group:(NSInteger)arg4 options:(NSUInteger)arg5 ;
+(id)itemWithType:(id)arg0 contactProperty:(id)arg1 bundleIdentifier:(id)arg2 userActivity:(id)arg3 isSuggested:(BOOL)arg4 options:(NSUInteger)arg5 ;
+(id)payItemWithLabel:(id)arg0 targetStringValue:(id)arg1 url:(id)arg2 bundleIdentifier:(id)arg3 ;
+(id)payItemWithLabel:(id)arg0 targetStringValue:(id)arg1 userActivity:(id)arg2 bundleIdentifier:(id)arg3 ;
+(id)textItemWithLabel:(id)arg0 targetPhoneNumber:(id)arg1 url:(id)arg2 bundleIdentifier:(id)arg3 group:(NSInteger)arg4 options:(NSUInteger)arg5 ;
+(id)textItemWithLabel:(id)arg0 targetStringValue:(id)arg1 url:(id)arg2 bundleIdentifier:(id)arg3 group:(NSInteger)arg4 options:(NSUInteger)arg5 ;
+(id)textItemWithLabel:(id)arg0 targetStringValue:(id)arg1 userActivity:(id)arg2 bundleIdentifier:(id)arg3 group:(NSInteger)arg4 options:(NSUInteger)arg5 ;
+(id)thirdPartyCallActionItemForHandle:(id)arg0 contactProperty:(id)arg1 actionType:(id)arg2 bundleIdentifier:(id)arg3 callProviderManager:(id)arg4 ;
+(id)ttyItemWithLabel:(id)arg0 targetStringValue:(id)arg1 url:(id)arg2 bundleIdentifier:(id)arg3 ;
+(id)ttyRelayItemWithLabel:(id)arg0 targetStringValue:(id)arg1 url:(id)arg2 bundleIdentifier:(id)arg3 ;
+(id)videoItemWithLabel:(id)arg0 targetStringValue:(id)arg1 dialRequest:(id)arg2 bundleIdentifier:(id)arg3 group:(NSInteger)arg4 options:(NSUInteger)arg5 ;
+(id)videoItemWithLabel:(id)arg0 targetStringValue:(id)arg1 url:(id)arg2 bundleIdentifier:(id)arg3 group:(NSInteger)arg4 options:(NSUInteger)arg5 ;
+(id)videoItemWithLabel:(id)arg0 targetStringValue:(id)arg1 userActivity:(id)arg2 bundleIdentifier:(id)arg3 group:(NSInteger)arg4 options:(NSUInteger)arg5 ;
+(id)voiceItemWithLabel:(id)arg0 targetStringValue:(id)arg1 dialRequest:(id)arg2 bundleIdentifier:(id)arg3 group:(NSInteger)arg4 options:(NSUInteger)arg5 ;
+(id)voiceItemWithLabel:(id)arg0 targetStringValue:(id)arg1 propertyKey:(id)arg2 dialRequest:(id)arg3 bundleIdentifier:(id)arg4 group:(NSInteger)arg5 options:(NSUInteger)arg6 ;
+(id)voiceItemWithLabel:(id)arg0 targetStringValue:(id)arg1 propertyKey:(id)arg2 userActivity:(id)arg3 bundleIdentifier:(id)arg4 group:(NSInteger)arg5 options:(NSUInteger)arg6 ;
+(id)voiceItemWithLabel:(id)arg0 targetStringValue:(id)arg1 url:(id)arg2 bundleIdentifier:(id)arg3 group:(NSInteger)arg4 options:(NSUInteger)arg5 ;
+(id)voiceItemWithLabel:(id)arg0 targetStringValue:(id)arg1 userActivity:(id)arg2 bundleIdentifier:(id)arg3 group:(NSInteger)arg4 options:(NSUInteger)arg5 ;
+(id)workspace;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isHandledByFirstPartyApp;
-(BOOL)shouldUseApplicationNameForLabel;
-(BOOL)shouldUseLabelForQuickActionButtonTitle;
-(NSUInteger)hash;
-(id)applicationNameForLabel;
-(id)description;
-(id)initWithItem:(id)arg0 contactProperty:(id)arg1 ;
-(id)initWithType:(id)arg0 contactProperty:(id)arg1 bundleIdentifier:(id)arg2 group:(NSInteger)arg3 options:(NSUInteger)arg4 ;
-(id)performActionWithContext:(id)arg0 ;
-(id)url;
-(void)associateWithRecentContactMetadata:(id)arg0 ;


@end


#endif