// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BLSBACKLIGHT_H
#define BLSBACKLIGHT_H

@class NSString;
@protocol BLSBacklightStateObservable, BLSBacklightChangeRequestable, BLSBacklightProxy;

#import <Foundation/Foundation.h>


@interface BLSBacklight : NSObject <BLSBacklightStateObservable, BLSBacklightChangeRequestable>

 {
    id<BLSBacklightProxy> *_backlightProxy;
}


@property (readonly, nonatomic, getter=isAlwaysOnEnabled) BOOL alwaysOnEnabled;
@property (readonly, nonatomic) NSInteger backlightState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger flipbookState;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isTransitioning) BOOL transitioning;


+(id)sharedBacklight;
+(void)setDefaultBacklightProxy:(id)arg0 ;
-(id)init;
-(id)performChangeRequest:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif