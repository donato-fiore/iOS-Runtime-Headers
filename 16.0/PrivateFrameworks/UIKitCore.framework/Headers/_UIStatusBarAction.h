// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UISTATUSBARACTION_H
#define _UISTATUSBARACTION_H


#import <Foundation/Foundation.h>


@interface _UIStatusBarAction : NSObject

@property (copy, nonatomic) id *block; // ivar: _block
@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled


+(id)actionWithBlock:(id)arg0 ;
-(void)performWithStatusBar:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif