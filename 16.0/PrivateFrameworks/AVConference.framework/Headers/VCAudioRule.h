// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCAUDIORULE_H
#define VCAUDIORULE_H


#import <Foundation/Foundation.h>


@interface VCAudioRule : NSObject {
    NSUInteger _hash;
}


@property (readonly, nonatomic) BOOL isSecondary; // ivar: _isSecondary
@property (readonly, nonatomic) int payload; // ivar: _payload
@property (readonly, nonatomic) unsigned int samplesPerBlock; // ivar: _samplesPerBlock
@property (readonly, nonatomic) BOOL sbr; // ivar: _sbr


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)init;
-(id)initWithPayload:(int)arg0 isSecondary:(BOOL)arg1 sbr:(BOOL)arg2 samplesPerBlock:(unsigned int)arg3 ;


@end


#endif