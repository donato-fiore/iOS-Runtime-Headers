// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ARALTITUDEUNDULATIONPAIR_H
#define ARALTITUDEUNDULATIONPAIR_H


#import <Foundation/Foundation.h>


@interface ARAltitudeUndulationPair : NSObject

@property (readonly, nonatomic) CGFloat altitude; // ivar: _altitude
@property (readonly, nonatomic) BOOL lookupFailed; // ivar: _lookupFailed
@property (readonly, nonatomic) NSInteger source; // ivar: _source
@property (readonly, nonatomic) CGFloat undulation; // ivar: _undulation


-(id)initWithAltitude:(CGFloat)arg0 undulation:(CGFloat)arg1 lookupFailed:(BOOL)arg2 source:(NSInteger)arg3 ;


@end


#endif