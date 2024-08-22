// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UISOPENURLACTION_H
#define UISOPENURLACTION_H

@class BSAction, NSURL, BSProcessHandle;



@interface UISOpenURLAction : BSAction

@property (readonly, copy, nonatomic) NSURL *url;
@property (readonly, nonatomic) BSProcessHandle *workspaceOriginatingProcess;


-(BOOL)isKindOfClass:(Class)arg0 ;
-(NSInteger)UIActionType;
-(id)initWithInfo:(id)arg0 timeout:(CGFloat)arg1 forResponseOnQueue:(id)arg2 withHandler:(id)arg3 ;
-(id)initWithURL:(id)arg0 ;
-(id)initWithURL:(id)arg0 workspaceOriginatingProcess:(id)arg1 ;
-(id)keyDescriptionForSetting:(NSUInteger)arg0 ;


@end


#endif