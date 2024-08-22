// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKKEYLINETOUCHABLE_H
#define NTKKEYLINETOUCHABLE_H


#import <Foundation/Foundation.h>


@interface NTKKeylineTouchable : NSObject {
    id *_handler;
}




+(id)touchableWithHandler:(id)arg0 ;
-(BOOL)pointInside:(struct CGPoint )arg0 keyline:(id)arg1 withEvent:(id)arg2 ;


@end


#endif