// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OZJSBEHAVIOR_H
#define OZJSBEHAVIOR_H

@protocol OZBehaviorJSExport;

#import <Foundation/Foundation.h>


@interface OZJSBehavior : NSObject <OZBehaviorJSExport>



@property (nonatomic) *void behavior; // ivar: _behavior


+(id)behaviorWithBehavior:(*void)arg0 ;
-(id)initWithBehavior:(*void)arg0 ;
-(void)setStartTime:(float)arg0 ;


@end


#endif