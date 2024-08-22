// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AXEVENTHANDINFOREPRESENTATION_H
#define AXEVENTHANDINFOREPRESENTATION_H

@class NSString, NSArray;
@protocol AXEventRepresentationDescription, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface AXEventHandInfoRepresentation : NSObject <AXEventRepresentationDescription, NSSecureCoding, NSCopying>



@property (nonatomic) unsigned int additionalHandEventFlagsForGeneratedEvents; // ivar: _additionalHandEventFlagsForGeneratedEvents
@property (nonatomic) unsigned short currentFingerCount; // ivar: _currentFingerCount
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned int eventType; // ivar: _eventType
@property (nonatomic) unsigned int handEventMask; // ivar: _handEventMask
@property (nonatomic) unsigned int handIdentity; // ivar: _handIdentity
@property (nonatomic) unsigned int handIndex; // ivar: _handIndex
@property (nonatomic) CGPoint handPosition; // ivar: _handPosition
@property (readonly) NSUInteger hash;
@property (nonatomic) unsigned short initialFingerCount; // ivar: _initialFingerCount
@property (readonly, nonatomic) BOOL isStylus;
@property (readonly, nonatomic) NSUInteger length; // ivar: _length
@property (retain, nonatomic) NSArray *paths; // ivar: _paths
@property (readonly) Class superclass;
@property (nonatomic) unsigned char swipe; // ivar: _swipe
@property (nonatomic) unsigned char systemGesturePossible; // ivar: _systemGesturePossible


+(BOOL)supportsSecureCoding;
-(id)accessibilityEventRepresentationTabularDescription;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif