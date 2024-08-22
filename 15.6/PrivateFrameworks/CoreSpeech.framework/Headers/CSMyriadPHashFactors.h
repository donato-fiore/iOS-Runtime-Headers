// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CSMYRIADPHASHFACTORS_H
#define CSMYRIADPHASHFACTORS_H


#import <Foundation/Foundation.h>


@interface CSMyriadPHashFactors : NSObject

@property (readonly, nonatomic) NSUInteger absTime; // ivar: _absTime
@property (readonly, nonatomic) unsigned char confidence; // ivar: _confidence
@property (readonly, nonatomic) unsigned char frac; // ivar: _frac
@property (readonly, nonatomic) unsigned char goodness; // ivar: _goodness
@property (readonly, nonatomic) unsigned short hashValue; // ivar: _hashValue


-(id)initWithHash:(unsigned short)arg0 goodness:(unsigned char)arg1 confidence:(unsigned char)arg2 absTime:(NSUInteger)arg3 frac:(unsigned char)arg4 ;


@end


#endif