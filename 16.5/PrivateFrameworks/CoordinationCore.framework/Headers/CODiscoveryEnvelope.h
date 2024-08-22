// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CODISCOVERYENVELOPE_H
#define CODISCOVERYENVELOPE_H


#import <Foundation/Foundation.h>

#import "CODiscoveryRecord.h"

@interface CODiscoveryEnvelope : NSObject

@property (readonly, nonatomic) NSUInteger received; // ivar: _received
@property (readonly, nonatomic) CODiscoveryRecord *record; // ivar: _record


+(id)envelopeWithRecord:(id)arg0 ;
-(id)_initWithRecord:(id)arg0 ;


@end


#endif