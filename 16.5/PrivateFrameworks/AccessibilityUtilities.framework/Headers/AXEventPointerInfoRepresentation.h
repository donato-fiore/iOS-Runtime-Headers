// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXEVENTPOINTERINFOREPRESENTATION_H
#define AXEVENTPOINTERINFOREPRESENTATION_H

@class NSString;
@protocol AXEventRepresentationDescription, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "AXEventRepresentation.h"

@interface AXEventPointerInfoRepresentation : NSObject <AXEventRepresentationDescription, NSSecureCoding, NSCopying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isPointerMove; // ivar: _isPointerMove
@property (nonatomic) CGFloat pointerAccelX; // ivar: _pointerAccelX
@property (nonatomic) CGFloat pointerAccelY; // ivar: _pointerAccelY
@property (nonatomic) CGFloat pointerAccelZ; // ivar: _pointerAccelZ
@property (nonatomic) CGFloat pointerButtonClickCount; // ivar: _pointerButtonClickCount
@property (nonatomic) CGFloat pointerButtonMask; // ivar: _pointerButtonMask
@property (nonatomic) CGFloat pointerButtonNumber; // ivar: _pointerButtonNumber
@property (nonatomic) CGFloat pointerButtonPressure; // ivar: _pointerButtonPressure
@property (nonatomic) BOOL pointerIsAbsolute; // ivar: _pointerIsAbsolute
@property (nonatomic) CGFloat pointerX; // ivar: _pointerX
@property (nonatomic) CGFloat pointerY; // ivar: _pointerY
@property (nonatomic) CGFloat pointerZ; // ivar: _pointerZ
@property (retain, nonatomic) AXEventRepresentation *scrollEvent; // ivar: _scrollEvent
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)accessibilityEventRepresentationTabularDescription;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif