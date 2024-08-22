// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PHASEGROUPPRESET_H
#define PHASEGROUPPRESET_H

@class NSDictionary;

#import <Foundation/Foundation.h>

#import "PHASEEngine.h"

@interface PHASEGroupPreset : NSObject {
    PHASEEngine *_engine;
}


@property (readonly, nonatomic) NSDictionary *settings; // ivar: _settings
@property (readonly, nonatomic) CGFloat timeToReset; // ivar: _timeToReset
@property (readonly, nonatomic) CGFloat timeToTarget; // ivar: _timeToTarget


+(id)new;
-(id)init;
-(id)initWithEngine:(id)arg0 settings:(id)arg1 timeToTarget:(CGFloat)arg2 timeToReset:(CGFloat)arg3 ;
-(void)activate;
-(void)activateWithTimeToTargetOverride:(CGFloat)arg0 ;
-(void)deactivate;
-(void)deactivateWithTimeToResetOverride:(CGFloat)arg0 ;


@end


#endif