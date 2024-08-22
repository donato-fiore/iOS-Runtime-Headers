// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIFOCUSENVIRONMENTCONTAINERTUPLE_H
#define _UIFOCUSENVIRONMENTCONTAINERTUPLE_H

@protocol UIFocusItemContainer, UIFocusEnvironment;

#import <Foundation/Foundation.h>


@interface _UIFocusEnvironmentContainerTuple : NSObject

@property (readonly, nonatomic) BOOL isScrollableContainer; // ivar: _isScrollableContainer
@property (readonly, nonatomic) NSObject<UIFocusItemContainer> *itemContainer; // ivar: _itemContainer
@property (readonly, nonatomic) NSObject<UIFocusEnvironment> *owningEnvironment; // ivar: _owningEnvironment


+(id)tupleWithOwningEnvironment:(id)arg0 itemContainer:(id)arg1 ;
+(id)tupleWithRequiredContainerFromEnvironment:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithOwningEnvironment:(id)arg0 itemContainer:(id)arg1 ;


@end


#endif