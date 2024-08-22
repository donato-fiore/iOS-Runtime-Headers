// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GKEDITACTION_H
#define GKEDITACTION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface GKEditAction : NSObject

@property (nonatomic) BOOL destructive; // ivar: _destructive
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) SEL selector; // ivar: _selector


+(id)actionWithName:(id)arg0 selector:(SEL)arg1 ;
+(id)deleteActionWithName:(id)arg0 ;


@end


#endif