// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SCRCTARGETSELECTOR_H
#define SCRCTARGETSELECTOR_H


#import <Foundation/Foundation.h>


@interface SCRCTargetSelector : NSObject

@property (readonly, nonatomic) SEL selector; // ivar: _selector
@property (readonly, weak, nonatomic) id *target; // ivar: _target


+(id)targetSelectorWithTarget:(id)arg0 selector:(SEL)arg1 ;
-(id)initWithTarget:(id)arg0 selector:(SEL)arg1 ;


@end


#endif