// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AXMAUDIODATASOURCE_H
#define AXMAUDIODATASOURCE_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface AXMAudioDataSource : NSObject

@property (nonatomic, getter=isCircular) BOOL circular; // ivar: _circular
@property (nonatomic) NSUInteger currentSampleIndex; // ivar: _currentSampleIndex
@property (readonly, nonatomic) NSArray *effectsChain; // ivar: _effectsChain
@property (nonatomic) NSUInteger length; // ivar: _length
@property (nonatomic) CGFloat level; // ivar: _level
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) *void sampleBuffer; // ivar: _sampleBuffer
@property (readonly, nonatomic) CGFloat sampleRate; // ivar: _sampleRate


-(id)description;
-(id)init;
-(id)initWithName:(id)arg0 sampleRate:(CGFloat)arg1 circular:(BOOL)arg2 ;
-(void)addEffectToChain:(id)arg0 ;
-(void)dealloc;
-(void)normalizeAudio;
-(void)processEffects:(NSUInteger)arg0 ;
-(void)removeEffectFromChain:(id)arg0 ;


@end


#endif