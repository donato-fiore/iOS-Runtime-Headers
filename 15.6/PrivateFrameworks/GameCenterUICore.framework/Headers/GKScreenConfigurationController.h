// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GKSCREENCONFIGURATIONCONTROLLER_H
#define GKSCREENCONFIGURATIONCONTROLLER_H

@class GKEventEmitter;

#import <Foundation/Foundation.h>


@interface GKScreenConfigurationController : NSObject

@property (retain, nonatomic) GKEventEmitter *emitter; // ivar: _emitter
@property (readonly) CGFloat greatestScreenScale; // ivar: _greatestScreenScale


+(CGFloat)_scaleForCurrentDisplayConfiguration;
+(id)sharedController;
-(id)init;
-(void)_screensDidChange:(id)arg0 ;
-(void)registerListener:(id)arg0 ;
-(void)unregisterListener:(id)arg0 ;


@end


#endif