// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IKDOMCHILDRENBINDINGSTRATEGY_H
#define IKDOMCHILDRENBINDINGSTRATEGY_H



#import "IKDOMBindingStrategy.h"

@interface IKDOMChildrenBindingStrategy : IKDOMBindingStrategy



-(id)initWithDOMBindingController:(id)arg0 ;
-(void)_regenerateChildDOMElements:(id)arg0 withItems:(id)arg1 usedPrototypesByIdentifier:(id)arg2 ;
-(void)_updateChildDOMElements:(id)arg0 withItems:(id)arg1 usedPrototypesByIdentifier:(id)arg2 changeSet:(id)arg3 ;
-(void)willUpdateWithItems:(id)arg0 indexTitles:(id)arg1 usedPrototypesByIdentifier:(id)arg2 changeSet:(id)arg3 ;


@end


#endif