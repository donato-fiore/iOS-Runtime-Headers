// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSKEYCOMMAND_H
#define TSKEYCOMMAND_H


#import <Foundation/Foundation.h>


@interface TSKeyCommand : NSObject {
    ? key;
    ? title;
    ? flags;
    ? selector;
    ? controller;
}




-(id)init;
-(id)initWithKey:(id)arg0 flags:(NSInteger)arg1 title:(id)arg2 controller:(id)arg3 selector:(SEL)arg4 ;


@end


#endif