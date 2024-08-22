// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BKSHIDEVENTDIGITIZERATTRIBUTES_H
#define BKSHIDEVENTDIGITIZERATTRIBUTES_H

@class NSArray;


#import "BKSHIDEventBaseAttributes.h"

@interface BKSHIDEventDigitizerAttributes : BKSHIDEventBaseAttributes

@property (nonatomic) NSInteger activeModifiers; // ivar: _activeModifiers
@property (nonatomic) CGFloat digitizerSurfaceHeight;
@property (nonatomic) CGSize digitizerSurfaceSize; // ivar: _digitizerSurfaceSize
@property (nonatomic) CGFloat digitizerSurfaceWidth;
@property (nonatomic) CGFloat initialTouchTimestamp; // ivar: _initialTouchTimestamp
@property (nonatomic) float maximumForce; // ivar: _maximumForce
@property (retain, nonatomic) NSArray *pathAttributes; // ivar: _pathAttributes
@property (nonatomic) NSInteger sceneTouchBehavior; // ivar: _sceneTouchBehavior
@property (nonatomic) BOOL systemGestureStateChange; // ivar: _systemGestureStateChange
@property (nonatomic) BOOL systemGesturesPossible; // ivar: _systemGesturesPossible
@property (nonatomic) unsigned char touchStreamIdentifier; // ivar: _touchStreamIdentifier


+(id)protobufSchema;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)appendDescriptionToFormatter:(id)arg0 ;


@end


#endif