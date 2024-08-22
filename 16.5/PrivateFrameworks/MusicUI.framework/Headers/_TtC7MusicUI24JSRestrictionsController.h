// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC7MUSICUI24JSRESTRICTIONSCONTROLLER_H
#define _TTC7MUSICUI24JSRESTRICTIONSCONTROLLER_H

@class JSValue;
@protocol _TtP7MusicUI31JSRestrictionsControllerExports_;

#import <Foundation/Foundation.h>


@interface _TtC7MusicUI24JSRestrictionsController : NSObject <_TtP7MusicUI31JSRestrictionsControllerExports_>

 {
    ? _isExplicitContentRestricted;
    ? _areMusicVideosRestricted;
    ? _isTVRestricted;
    ? _areMoviesRestricted;
    ? _isSocialDisabled;
    ? restrictionsController;
}


@property (nonatomic, retain) JSValue *areMoviesRestricted;
@property (nonatomic, retain) JSValue *areMusicVideosRestricted;
@property (nonatomic, retain) JSValue *isExplicitContentRestricted;
@property (nonatomic, retain) JSValue *isSocialDisabled;
@property (nonatomic, retain) JSValue *isTVRestricted;


-(id)init;


@end


#endif