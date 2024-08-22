// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TUCALLSCREENSHAREATTRIBUTES_H
#define TUCALLSCREENSHAREATTRIBUTES_H

@class NSString, NSNumber, NSValue, NSUUID;
@protocol TUScreenShareAttributes;

#import <Foundation/Foundation.h>


@interface TUCallScreenShareAttributes : NSObject <TUScreenShareAttributes>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger deviceFamily; // ivar: _deviceFamily
@property (retain, nonatomic) NSNumber *displayID; // ivar: _displayID
@property (retain, nonatomic) NSNumber *displayScale; // ivar: _displayScale
@property (retain, nonatomic) NSNumber *frameRate; // ivar: _frameRate
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSValue *originalResolution; // ivar: _originalResolution
@property (retain, nonatomic) NSNumber *scaleFactor; // ivar: _scaleFactor
@property (nonatomic) NSInteger style; // ivar: _style
@property (readonly) Class superclass;
@property (retain, nonatomic) NSUUID *windowUUID; // ivar: _windowUUID
@property (nonatomic, getter=isWindowed) BOOL windowed; // ivar: _windowed


+(BOOL)supportsSecureCoding;
+(NSInteger)currentDeviceFamily;
+(id)defaultAttributes;
+(id)defaultDisplayScale;
+(id)defaultScaleFactor;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToScreenShareAttributes:(id)arg0 ;
-(BOOL)isSignificantChangeFromAttributes:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif