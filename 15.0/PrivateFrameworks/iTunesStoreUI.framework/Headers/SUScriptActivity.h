// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SUSCRIPTACTIVITY_H
#define SUSCRIPTACTIVITY_H

@class WebScriptObject, NSString;


#import "SUScriptObject.h"
#import "SUScriptFunction.h"
#import "SUActivity.h"

@interface SUScriptActivity : SUScriptObject {
    SUScriptFunction *_actionFunction;
}


@property (retain) WebScriptObject *actionFunction;
@property (readonly) NSString *activityImageNameGiftAppStore;
@property (readonly) NSString *activityImageNameGiftMusicStore;
@property (readonly) NSString *activityImageNamePingAppStore;
@property (readonly) NSString *activityImageNamePingMusicStore;
@property (readonly) NSString *activityImageNameWishlistAppStore;
@property (readonly) NSString *activityImageNameWishlistMusicStore;
@property (copy) NSString *activityTitle;
@property (copy) NSString *activityType;
@property (readonly, nonatomic) SUActivity *nativeActivity;


+(id)webScriptNameForKeyName:(id)arg0 ;
+(id)webScriptNameForSelector:(SEL)arg0 ;
+(void)initialize;
-(id)_className;
-(id)attributeKeys;
-(id)scriptAttributeKeys;
-(void)_performActionFunctionWithItems:(id)arg0 ;
-(void)dealloc;
-(void)setActivityImageWithName:(id)arg0 ;
-(void)setActivityImageWithURL:(id)arg0 scale:(id)arg1 ;


@end


#endif