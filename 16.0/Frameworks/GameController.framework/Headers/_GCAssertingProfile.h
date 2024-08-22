// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _GCASSERTINGPROFILE_H
#define _GCASSERTINGPROFILE_H

@class NSString;
@protocol GCNamedProfile;

#import <Foundation/Foundation.h>

#import "GCMotion.h"

@interface _GCAssertingProfile : NSObject <GCNamedProfile>



@property (retain) GCMotion *_motion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSString *name;
@property (readonly) Class superclass;


-(id)initWithController:(id)arg0 ;
-(id)productCategory;
-(id)valueChangedHandler:(SEL)arg0 ;
-(unsigned int)sampleRate;
-(void)appDidBecomeActive;
-(void)appWillResignActive;
-(void)handleEvent:(struct __IOHIDEvent *)arg0 ;
-(void)setButton:(id)arg0 pressed:(BOOL)arg1 ;
-(void)setButton:(id)arg0 value:(CGFloat)arg1 ;
-(void)setController:(id)arg0 ;
-(void)setDpad:(id)arg0 x:(CGFloat)arg1 y:(CGFloat)arg2 ;
-(void)setPlayerIndex:(NSInteger)arg0 ;


@end


#endif