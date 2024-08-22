// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MCNEARBYKEY_H
#define MCNEARBYKEY_H


#import <Foundation/Foundation.h>


@interface MCNearbyKey : NSObject

@property (readonly, nonatomic) unsigned short character; // ivar: _character
@property (readonly, nonatomic) float logLikelihood; // ivar: _logLikelihood


-(id)initWithCharacter:(unsigned short)arg0 logLikelihood:(float)arg1 ;


@end


#endif