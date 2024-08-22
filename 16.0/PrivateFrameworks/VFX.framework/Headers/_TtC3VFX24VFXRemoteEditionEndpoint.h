// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC3VFX24VFXREMOTEEDITIONENDPOINT_H
#define _TTC3VFX24VFXREMOTEEDITIONENDPOINT_H

@class NSString;

#import <Foundation/Foundation.h>

#import "_TtC3VFX9VFXEffect.h"

@interface _TtC3VFX24VFXRemoteEditionEndpoint : NSObject {
    ? name;
    ? multipeerAdvertiser;
    ? ownedByClient;
    ? urlToReloadFrom;
}


@property (nonatomic, weak) _TtC3VFX9VFXEffect *effect; // ivar: effect
@property (nonatomic, copy) NSString *name;


-(BOOL)startAndReturnError:(*id)arg0 ;
-(id)init;
-(id)initWithName:(id)arg0 ;
-(void)dealloc;
-(void)stop;


@end


#endif