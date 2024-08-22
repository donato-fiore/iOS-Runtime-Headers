// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CCUICONTENTMODULECONTEXT_H
#define CCUICONTENTMODULECONTEXT_H

@class NSString;
@protocol CCUIContentModuleContextDelegate;

#import <Foundation/Foundation.h>


@interface CCUIContentModuleContext : NSObject

@property (weak, nonatomic) NSObject<CCUIContentModuleContextDelegate> *delegate; // ivar: _delegate
@property (readonly, copy, nonatomic) NSString *moduleIdentifier; // ivar: _moduleIdentifier


+(BOOL)areAnimationsPermittedInWindow:(id)arg0 ;
+(id)_sharedOpenAppService;
+(id)_sharedOpenApplicationOptions;
+(void)initialize;
+(void)performWithoutAnimationWhileHidden:(id)arg0 ;
+(void)performWithoutAnimationWhileHiddenInWindow:(id)arg0 actions:(id)arg1 ;
+(void)setAnimationsPermitted:(BOOL)arg0 inWindow:(id)arg1 ;
-(id)initWithModuleIdentifier:(id)arg0 ;
-(id)sensorActivityDataForActiveSensorType:(NSUInteger)arg0 ;
-(struct CCUIModuleLayoutSize )moduleLayoutSizeForOrientation:(NSInteger)arg0 ;
-(void)dismissControlCenter;
-(void)dismissModule;
-(void)enqueueStatusUpdate:(id)arg0 ;
-(void)openApplication:(id)arg0 completionHandler:(id)arg1 ;
-(void)openApplication:(id)arg0 withOptions:(id)arg1 completionHandler:(id)arg2 ;
-(void)openURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)requestAuthenticationWithCompletionHandler:(id)arg0 ;
-(void)requestExpandModule;
-(void)requestLayoutSizeUpdate;
-(void)setHomeGestureDismissalAllowed:(BOOL)arg0 ;


@end


#endif