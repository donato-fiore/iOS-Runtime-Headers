// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXPAGETURNINGREPLAYABLEGESTURE_H
#define AXPAGETURNINGREPLAYABLEGESTURE_H



#import "AXReplayableGesture.h"

@interface AXPageTurningReplayableGesture : AXReplayableGesture

@property (nonatomic) BOOL isLandscape; // ivar: _isLandscape
@property (nonatomic) BOOL isLeftToRightSwipe; // ivar: _isLeftToRightSwipe


+(BOOL)supportsSecureCoding;
-(BOOL)arePointsDeviceRelative;
-(BOOL)isEqual:(id)arg0 ;
-(CGFloat)forceForFingerIdentifier:(id)arg0 atEventIndex:(NSUInteger)arg1 ;
-(CGFloat)timeAtEventIndex:(NSUInteger)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)numberOfEvents;
-(id)fingerIdentifiersAtEventIndex:(NSUInteger)arg0 ;
-(id)initForLeftToRightSwipe:(BOOL)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(struct CGPoint )pointForFingerIdentifier:(id)arg0 atEventIndex:(NSUInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateForLandscape:(BOOL)arg0 ;


@end


#endif