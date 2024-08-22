// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIWEAKDISPLAYLINKTARGET_H
#define _UIWEAKDISPLAYLINKTARGET_H


#import <Foundation/Foundation.h>


@interface _UIWeakDisplayLinkTarget : NSObject {
    id *_target;
    SEL _action;
}




+(SEL)displayLinkAction;
-(id)initWithTarget:(id)arg0 action:(SEL)arg1 ;
-(void)_displayLinkTick:(id)arg0 ;


@end


#endif