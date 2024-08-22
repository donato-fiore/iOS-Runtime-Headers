// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLSHAREDSTREAMSVALIDATEDEXTERNALRESOURCE_H
#define PLSHAREDSTREAMSVALIDATEDEXTERNALRESOURCE_H

@class NSString;


#import "PLValidatedExternalResource.h"

@interface PLSharedStreamsValidatedExternalResource : PLValidatedExternalResource

@property (retain, nonatomic) NSString *fingerprint; // ivar: _fingerprint
@property (nonatomic) unsigned int sharedStreamsType; // ivar: _sharedStreamsType


-(id)description;


@end


#endif