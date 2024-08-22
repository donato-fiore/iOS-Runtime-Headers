// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BKSHIDEVENTPOINTERATTRIBUTES_H
#define BKSHIDEVENTPOINTERATTRIBUTES_H

@class NSArray;


#import "BKSHIDEventDigitizerAttributes.h"

@interface BKSHIDEventPointerAttributes : BKSHIDEventDigitizerAttributes

@property (nonatomic) CGPoint acceleratedRelativePosition; // ivar: _acceleratedRelativePosition
@property (nonatomic) CGFloat acceleratedRelativePositionX;
@property (nonatomic) CGFloat acceleratedRelativePositionY;
@property (nonatomic) NSInteger fingerDownCount; // ivar: _fingerDownCount
@property (copy, nonatomic) NSArray *hitTestContexts; // ivar: _hitTestContexts
@property (nonatomic) unsigned char pointerEdgeMask; // ivar: _pointerEdgeMask
@property (nonatomic) unsigned short pointerState; // ivar: _pointerState
@property (nonatomic) CGPoint unacceleratedRelativePosition; // ivar: _unacceleratedRelativePosition
@property (nonatomic) CGFloat unacceleratedRelativePositionX;
@property (nonatomic) CGFloat unacceleratedRelativePositionY;


+(id)protobufSchema;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)appendDescriptionToFormatter:(id)arg0 ;


@end


#endif