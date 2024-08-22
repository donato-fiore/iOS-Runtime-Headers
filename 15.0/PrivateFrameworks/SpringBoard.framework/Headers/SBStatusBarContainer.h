// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBSTATUSBARCONTAINER_H
#define SBSTATUSBARCONTAINER_H

@class NSString, UIStatusBar;

#import <Foundation/Foundation.h>


@interface SBStatusBarContainer : NSObject

@property (retain, nonatomic) NSString *reason; // ivar: _reason
@property (weak, nonatomic) UIStatusBar *statusBar; // ivar: _statusBar


-(id)description;
-(void)dealloc;


@end


#endif