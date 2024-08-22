// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SUCOREFSMATTACHEDACTION_H
#define SUCOREFSMATTACHEDACTION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface SUCoreFSMAttachedAction : NSObject

@property (readonly, weak, nonatomic) id *actionDelegate; // ivar: _actionDelegate
@property (readonly, retain, nonatomic) Class eventInfoClass; // ivar: _eventInfoClass
@property (readonly, retain, nonatomic) NSString *fsmAction; // ivar: _fsmAction


-(id)description;
-(id)initWithAction:(id)arg0 usingDelegate:(id)arg1 withInfoClass:(Class)arg2 ;


@end


#endif