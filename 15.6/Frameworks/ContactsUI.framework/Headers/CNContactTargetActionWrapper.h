// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNCONTACTTARGETACTIONWRAPPER_H
#define CNCONTACTTARGETACTIONWRAPPER_H


#import <Foundation/Foundation.h>


@interface CNContactTargetActionWrapper : NSObject

@property (readonly, nonatomic) SEL action; // ivar: _action
@property (readonly, weak, nonatomic) id *target; // ivar: _target


-(id)description;
-(id)initWithTarget:(id)arg0 action:(SEL)arg1 ;
-(void)performActionWithSender:(id)arg0 ;


@end


#endif