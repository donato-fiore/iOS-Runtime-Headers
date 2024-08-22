// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXSTORYTVWATCHNEXTCELLCONFIGURATION_H
#define PXSTORYTVWATCHNEXTCELLCONFIGURATION_H

@class NSString;


#import "PXGFocusEffectViewConfiguration.h"
#import "PXStoryTVCellSpec.h"

@interface PXStoryTVWatchNextCellConfiguration : PXGFocusEffectViewConfiguration

@property (nonatomic) NSInteger countdownValue; // ivar: _countdownValue
@property (nonatomic) NSInteger maximumCountdownValue; // ivar: _maximumCountdownValue
@property (retain, nonatomic) PXStoryTVCellSpec *spec; // ivar: _spec
@property (retain, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (retain, nonatomic) NSString *title; // ivar: _title


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif