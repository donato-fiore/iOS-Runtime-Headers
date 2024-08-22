// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FBDISPLAYLAYOUTTRANSITION_H
#define FBDISPLAYLAYOUTTRANSITION_H

@class NSString;
@protocol BSInvalidatable;

#import <Foundation/Foundation.h>

#import "FBMainDisplayLayoutPublisher.h"

@interface FBDisplayLayoutTransition : NSObject {
    FBMainDisplayLayoutPublisher *_publisher;
    id<BSInvalidatable> *_transition;
}


@property (nonatomic) NSInteger backlightLevel; // ivar: _backlightLevel
@property (readonly, nonatomic) NSInteger displayType; // ivar: _displayType
@property (nonatomic) NSInteger interfaceOrientation; // ivar: _interfaceOrientation
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (copy, nonatomic) NSString *transitionReason; // ivar: _transitionReason
@property (readonly, nonatomic, getter=isTransitioning) BOOL transitioning;


+(id)layoutForDisplayType:(NSInteger)arg0 ;
+(void)flushLayoutForDisplayType:(NSInteger)arg0 ;
-(id)description;
-(id)init;
-(id)initWithDisplayType:(NSInteger)arg0 name:(id)arg1 ;
-(void)beginTransition;
-(void)dealloc;
-(void)endTransition;


@end


#endif