// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _GCKEYBOARDEVENTFUSION_H
#define _GCKEYBOARDEVENTFUSION_H

@class NSString, NSArray;
@protocol _GCKeyboardEventSource;

#import <Foundation/Foundation.h>


@interface _GCKeyboardEventFusion : NSObject <_GCKeyboardEventSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *observations; // ivar: _observations
@property (copy) NSArray *observers; // ivar: _observers
@property (readonly) Class superclass;


-(id)init;
-(id)initWithSources:(id)arg0 ;
-(id)observeKeyboardEvents:(id)arg0 ;
-(void)dealloc;


@end


#endif