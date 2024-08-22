// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIFOCUSENVIRONMENTSCROLLABLECONTAINERTUPLE_H
#define _UIFOCUSENVIRONMENTSCROLLABLECONTAINERTUPLE_H

@protocol UIFocusEnvironment, UIFocusItemScrollableContainer;

#import <Foundation/Foundation.h>


@interface _UIFocusEnvironmentScrollableContainerTuple : NSObject

@property (readonly, nonatomic) NSObject<UIFocusEnvironment> *owningEnvironment; // ivar: _owningEnvironment
@property (readonly, nonatomic) NSObject<UIFocusItemScrollableContainer> *scrollableContainer; // ivar: _scrollableContainer


+(id)tupleWithEnvironment:(id)arg0 scrollableContainer:(id)arg1 ;
+(id)tupleWithScrollView:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithEnvironment:(id)arg0 scrollableContainer:(id)arg1 ;


@end


#endif