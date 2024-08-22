// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AXEVENTIOSMACPOINTERINFOREPRESENTATION_H
#define AXEVENTIOSMACPOINTERINFOREPRESENTATION_H

@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface AXEventIOSMACPointerInfoRepresentation : NSObject <NSSecureCoding, NSCopying>



@property (nonatomic) NSInteger buttonIndex; // ivar: _buttonIndex
@property (nonatomic) CGPoint location; // ivar: _location
@property (nonatomic) BOOL pressed; // ivar: _pressed


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif