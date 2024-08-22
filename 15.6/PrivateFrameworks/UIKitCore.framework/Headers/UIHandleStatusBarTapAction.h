// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIHANDLESTATUSBARTAPACTION_H
#define UIHANDLESTATUSBARTAPACTION_H

@class BSAction;



@interface UIHandleStatusBarTapAction : BSAction

@property (readonly, nonatomic) NSInteger statusBarStyle;
@property (readonly, nonatomic) NSUInteger statusBarStyleOverride;


-(NSInteger)UIActionType;
-(id)initWithInfo:(id)arg0 timeout:(CGFloat)arg1 forResponseOnQueue:(id)arg2 withHandler:(id)arg3 ;
-(id)initWithStatusBarStyle:(NSInteger)arg0 ;
-(id)initWithStatusBarStyle:(NSInteger)arg0 andStatusBarStyleOverride:(NSUInteger)arg1 ;
-(id)initWithStatusBarStyleOverride:(NSUInteger)arg0 ;
-(id)keyDescriptionForSetting:(NSUInteger)arg0 ;


@end


#endif