// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TVCONTROLTARGET_H
#define _TVCONTROLTARGET_H

@class IKViewElement;

#import <Foundation/Foundation.h>


@interface _TVControlTarget : NSObject {
    IKViewElement *_element;
}




+(void)addTargetInControl:(id)arg0 withViewElement:(id)arg1 ;
-(id)initWithViewElement:(id)arg0 ;
-(void)_action:(id)arg0 ;


@end


#endif