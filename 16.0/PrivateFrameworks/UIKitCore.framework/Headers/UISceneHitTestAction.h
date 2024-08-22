// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UISCENEHITTESTACTION_H
#define UISCENEHITTESTACTION_H

@class BSAction;



@interface UISceneHitTestAction : BSAction

@property (readonly, nonatomic) CGPoint touchLocation;


-(NSInteger)UIActionType;
-(id)initWithTouchLocation:(struct CGPoint )arg0 responseHandler:(id)arg1 ;
-(void)sendResponse:(id)arg0 ;


@end


#endif