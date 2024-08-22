// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SUSCRIPTNAVIGATIONTRANSITION_H
#define SUSCRIPTNAVIGATIONTRANSITION_H

@class NSString, NSMutableArray;


#import "SUScriptObject.h"
#import "SUNavigationContainerViewController.h"
#import "SUScriptNavigationItem.h"

@interface SUScriptNavigationTransition : SUScriptObject {
    NSInteger _status;
    NSString *_title;
    SUNavigationContainerViewController *_container;
}


@property (retain, nonatomic) NSMutableArray *finishBlocks; // ivar: _finishBlocks
@property (nonatomic) NSInteger fromIndex; // ivar: _fromIndex
@property (retain, nonatomic) NSString *rightBarButton; // ivar: _rightBarButton
@property (nonatomic) NSInteger status;
@property (nonatomic) NSInteger toIndex; // ivar: _toIndex
@property (retain, nonatomic) SUScriptNavigationItem *topNavigationItem;


+(id)webScriptNameForKeyName:(id)arg0 ;
+(id)webScriptNameForSelector:(SEL)arg0 ;
+(void)initialize;
-(id)_className;
-(id)attributeKeys;
-(id)initWithContainer:(id)arg0 finishBlock:(id)arg1 ;
-(id)scriptAttributeKeys;
-(void)addFinishBlock:(id)arg0 ;
-(void)finishedLoading;


@end


#endif