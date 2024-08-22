// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKTUCONVERSATIONVIEWUTILITIES_H
#define CKTUCONVERSATIONVIEWUTILITIES_H


#import <Foundation/Foundation.h>


@interface CKTUConversationViewUtilities : NSObject



+(BOOL)activityHasImageForTUConversation:(id)arg0 ;
+(NSUInteger)ckTUConversationStateForTUConversation:(id)arg0 ;
+(id)activityAppNameForTUConversation:(id)arg0 ;
+(id)activityBundleIdentifierForTUConversation:(id)arg0 ;
+(id)activityDescriptionStringForTUConversation:(id)arg0 ;
+(id)activityIconForTUConversation:(id)arg0 iconSize:(CGFloat)arg1 ;
+(id)activityImageForTUConversation:(id)arg0 ;
+(id)activityTextForTUConversation:(id)arg0 ;
+(id)activityTitleForTUConversation:(id)arg0 ;
+(id)faceTimeIconForTUConversation:(id)arg0 ;
+(id)joinStateStatusStringForTUConversation:(id)arg0 ;
+(id)sharePlayIcon;
+(struct CGSize )faceTimeIconSize;
+(void)formatLPImageForScreenShare:(id)arg0 conversation:(id)arg1 ;


@end


#endif