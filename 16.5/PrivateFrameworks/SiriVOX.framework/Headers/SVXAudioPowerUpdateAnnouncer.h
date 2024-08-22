// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SVXAUDIOPOWERUPDATEANNOUNCER_H
#define SVXAUDIOPOWERUPDATEANNOUNCER_H

@class NSString;
@protocol SVXAudioPowerUpdateListening;


#import "SVXAnnouncer.h"

@interface SVXAudioPowerUpdateAnnouncer : SVXAnnouncer <SVXAudioPowerUpdateListening>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)protocol;


@end


#endif