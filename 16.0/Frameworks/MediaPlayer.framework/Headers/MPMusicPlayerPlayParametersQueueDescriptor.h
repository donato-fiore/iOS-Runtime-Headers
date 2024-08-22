// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPMUSICPLAYERPLAYPARAMETERSQUEUEDESCRIPTOR_H
#define MPMUSICPLAYERPLAYPARAMETERSQUEUEDESCRIPTOR_H

@class NSArray;


#import "MPMusicPlayerQueueDescriptor.h"
#import "MPMusicPlayerPlayParameters.h"

@interface MPMusicPlayerPlayParametersQueueDescriptor : MPMusicPlayerQueueDescriptor

@property (copy, nonatomic) NSArray *playParametersQueue; // ivar: _playParametersQueue
@property (retain, nonatomic) MPMusicPlayerPlayParameters *startItemPlayParameters; // ivar: _startItemPlayParameters


+(BOOL)supportsSecureCoding;
-(BOOL)isEmpty;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPlayParametersQueue:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setEndTime:(CGFloat)arg0 forItemWithPlayParameters:(id)arg1 ;
-(void)setStartTime:(CGFloat)arg0 forItemWithPlayParameters:(id)arg1 ;


@end


#endif