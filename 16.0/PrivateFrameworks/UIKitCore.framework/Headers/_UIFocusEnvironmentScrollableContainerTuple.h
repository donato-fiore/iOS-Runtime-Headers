// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIFOCUSENVIRONMENTSCROLLABLECONTAINERTUPLE_H
#define _UIFOCUSENVIRONMENTSCROLLABLECONTAINERTUPLE_H

@protocol UIFocusEnvironment, UIFocusItemScrollableContainer;

#import <Foundation/Foundation.h>


@interface _UIFocusEnvironmentScrollableContainerTuple : NSObject

@property (readonly, nonatomic) NSObject<UIFocusEnvironment> *owningEnvironment; // ivar: _owningEnvironment
@property (readonly, nonatomic) NSObject<UIFocusItemScrollableContainer> *scrollableContainer; // ivar: _scrollableContainer


+(id)tupleWithOwningEnvironment:(id)arg0 scrollableContainer:(id)arg1 ;
+(id)tupleWithScrollView:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithOwningEnvironment:(id)arg0 scrollableContainer:(id)arg1 ;


@end


#endif