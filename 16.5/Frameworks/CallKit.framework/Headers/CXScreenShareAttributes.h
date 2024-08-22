// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CXSCREENSHAREATTRIBUTES_H
#define CXSCREENSHAREATTRIBUTES_H

@class NSNumber, NSValue, NSUUID;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CXScreenShareAttributes : NSObject <NSSecureCoding>



@property (nonatomic) NSInteger deviceFamily; // ivar: _deviceFamily
@property (retain, nonatomic) NSNumber *displayID; // ivar: _displayID
@property (retain, nonatomic) NSNumber *displayScale; // ivar: _displayScale
@property (retain, nonatomic) NSNumber *frameRate; // ivar: _frameRate
@property (copy, nonatomic) NSValue *originalResolution; // ivar: _originalResolution
@property (retain, nonatomic) NSNumber *scaleFactor; // ivar: _scaleFactor
@property (nonatomic) NSInteger style; // ivar: _style
@property (retain, nonatomic) NSUUID *windowUUID; // ivar: _windowUUID
@property (nonatomic, getter=isWindowed) BOOL windowed; // ivar: _windowed


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)customDescription;
-(id)initWithCoder:(id)arg0 ;
-(id)sanitizedCopyWithZone:(struct _NSZone *)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif