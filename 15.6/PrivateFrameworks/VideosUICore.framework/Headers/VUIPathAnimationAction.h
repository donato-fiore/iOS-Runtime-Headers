// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUIPATHANIMATIONACTION_H
#define VUIPATHANIMATIONACTION_H

@class CABasicAnimation, NSString;
@protocol CAAction;

#import <Foundation/Foundation.h>


@interface VUIPathAnimationAction : NSObject <CAAction>



@property (retain, nonatomic) CABasicAnimation *animationToRun; // ivar: _animationToRun
@property (nonatomic) *CGPath fromPath; // ivar: _fromPath
@property (retain, nonatomic) NSString *key; // ivar: _key


-(void)dealloc;
-(void)runActionForKey:(id)arg0 object:(id)arg1 arguments:(id)arg2 ;


@end


#endif