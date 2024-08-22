// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DBFOCUSASSERTION_H
#define DBFOCUSASSERTION_H

@class NSString, FBScene, UIWindow;

#import <Foundation/Foundation.h>


@interface DBFocusAssertion : NSObject

@property (readonly, copy, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) int pid; // ivar: _pid
@property (readonly, nonatomic) CGFloat priority; // ivar: _priority
@property (readonly, nonatomic) FBScene *scene; // ivar: _scene
@property (readonly, nonatomic) NSInteger type; // ivar: _type
@property (readonly, weak, nonatomic) UIWindow *window; // ivar: _window


-(id)description;
-(id)initWithName:(id)arg0 type:(NSInteger)arg1 priority:(CGFloat)arg2 window:(id)arg3 application:(id)arg4 pid:(int)arg5 scene:(id)arg6 ;


@end


#endif