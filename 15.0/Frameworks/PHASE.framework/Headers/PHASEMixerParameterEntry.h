// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PHASEMIXERPARAMETERENTRY_H
#define PHASEMIXERPARAMETERENTRY_H


#import <Foundation/Foundation.h>

#import "PHASEListener.h"
#import "PHASESource.h"

@interface PHASEMixerParameterEntry : NSObject

@property (retain, nonatomic) PHASEListener *listener; // ivar: _listener
@property (nonatomic) NSInteger mixerType; // ivar: _mixerType
@property (retain, nonatomic) PHASESource *source; // ivar: _source


-(id)init;


@end


#endif