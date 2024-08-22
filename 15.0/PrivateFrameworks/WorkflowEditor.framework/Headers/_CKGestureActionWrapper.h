// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _CKGESTUREACTIONWRAPPER_H
#define _CKGESTUREACTIONWRAPPER_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface _CKGestureActionWrapper : NSObject <NSCopying>

 {
    CKTypedComponentAction<UIGestureRecognizer *> _action;
}




-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithGestureAction:(struct CKTypedComponentAction<UIGestureRecognizer *> )arg0 ;
-(struct CKTypedComponentAction<UIGestureRecognizer *> )action;


@end


#endif