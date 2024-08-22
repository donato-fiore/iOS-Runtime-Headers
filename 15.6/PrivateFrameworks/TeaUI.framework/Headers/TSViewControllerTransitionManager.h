// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSVIEWCONTROLLERTRANSITIONMANAGER_H
#define TSVIEWCONTROLLERTRANSITIONMANAGER_H


#import <Foundation/Foundation.h>


@interface TSViewControllerTransitionManager : NSObject {
    ? states;
}




-(id)init;
-(void)beginTransitionWithViewController:(id)arg0 transition:(NSInteger)arg1 animated:(BOOL)arg2 ;
-(void)endTransitionWithViewController:(id)arg0 ;


@end


#endif