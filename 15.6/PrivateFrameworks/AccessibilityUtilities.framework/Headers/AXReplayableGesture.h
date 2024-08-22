// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AXREPLAYABLEGESTURE_H
#define AXREPLAYABLEGESTURE_H

@class NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AXReplayableGesture : NSObject <NSSecureCoding>

 {
    NSArray *_allEvents;
    BOOL _arePointsDeviceRelative;
}




+(BOOL)supportsSecureCoding;
+(id)tapGestureForInterfaceOrientedPoint:(struct CGPoint )arg0 ;
-(BOOL)arePointsDeviceRelative;
-(BOOL)isEqual:(id)arg0 ;
-(CGFloat)forceForFingerIdentifier:(id)arg0 atEventIndex:(NSUInteger)arg1 ;
-(CGFloat)timeAtEventIndex:(NSUInteger)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)numberOfEvents;
-(id)description;
-(id)fingerIdentifiersAtEventIndex:(NSUInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(struct CGPoint )pointForFingerIdentifier:(id)arg0 atEventIndex:(NSUInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateForLandscape:(BOOL)arg0 ;


@end


#endif