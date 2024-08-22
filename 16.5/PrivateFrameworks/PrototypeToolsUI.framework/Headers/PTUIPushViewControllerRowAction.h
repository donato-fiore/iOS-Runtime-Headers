// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PTUIPUSHVIEWCONTROLLERROWACTION_H
#define PTUIPUSHVIEWCONTROLLERROWACTION_H

@class PTRowAction;



@interface PTUIPushViewControllerRowAction : PTRowAction

@property (readonly, nonatomic) id *viewControllerCreator; // ivar: _viewControllerCreator


+(id)actionWithViewControllerCreator:(id)arg0 ;
-(BOOL)deselectsRowOnSuccess;
-(id)defaultHandler:(SEL)arg0 ;


@end


#endif