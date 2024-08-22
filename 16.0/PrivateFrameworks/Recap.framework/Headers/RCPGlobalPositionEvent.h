// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RCPGLOBALPOSITIONEVENT_H
#define RCPGLOBALPOSITIONEVENT_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "RCPEventSenderProperties.h"

@interface RCPGlobalPositionEvent : NSObject <NSCopying>



@property (readonly) CGPoint location; // ivar: _location
@property (readonly) ? orientation; // ivar: _orientation
@property (readonly) RCPEventSenderProperties *senderProperties; // ivar: _senderProperties
@property (readonly) NSUInteger timestamp; // ivar: _timestamp
@property (readonly) CGFloat zPosition; // ivar: _zPosition


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithLocation:(struct CGPoint )arg0 zPosition:(CGFloat)arg1 orientation:(struct ? )arg2 timestamp:(NSUInteger)arg3 senderProperties:(id)arg4 ;


@end


#endif