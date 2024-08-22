// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASBACKGROUNDOBSERVER_H
#define ASBACKGROUNDOBSERVER_H

@class UIViewController;

#import <Foundation/Foundation.h>


@interface ASBackgroundObserver : NSObject

@property (readonly, nonatomic) id *block; // ivar: _block
@property (readonly, weak, nonatomic) UIViewController *viewController; // ivar: _viewController


-(id)initWithViewController:(id)arg0 block:(id)arg1 ;
-(void)_hostDidEnterBackground:(id)arg0 ;
-(void)_sceneDidEnterBackground:(id)arg0 ;
-(void)dealloc;


@end


#endif