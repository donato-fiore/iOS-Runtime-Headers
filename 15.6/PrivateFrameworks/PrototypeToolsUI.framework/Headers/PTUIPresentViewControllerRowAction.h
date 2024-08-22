// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PTUIPRESENTVIEWCONTROLLERROWACTION_H
#define PTUIPRESENTVIEWCONTROLLERROWACTION_H

@class PTRowAction;



@interface PTUIPresentViewControllerRowAction : PTRowAction

@property (readonly, nonatomic) id *viewControllerCreator; // ivar: _viewControllerCreator


+(id)actionWithViewControllerCreator:(id)arg0 ;
-(BOOL)deselectsRowOnSuccess;
-(id)defaultHandler:(SEL)arg0 ;


@end


#endif