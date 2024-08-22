// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GCREPLAYKITGESTURESETTINGS_H
#define GCREPLAYKITGESTURESETTINGS_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface GCReplayKitGestureSettings : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSString *controllerElementMappingKey; // ivar: _controllerElementMappingKey
@property (nonatomic) NSInteger doublePressGesture; // ivar: _doublePressGesture
@property (nonatomic) NSInteger longPressGesture; // ivar: _longPressGesture
@property (nonatomic) NSInteger singlePressGesture; // ivar: _singlePressGesture


+(BOOL)supportsSecureCoding;
-(NSInteger)gestureModeForGestureType:(NSInteger)arg0 ;
-(NSInteger)gestureTypeForGestureMode:(NSInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setGestureMode:(NSInteger)arg0 forGestureType:(NSInteger)arg1 ;


@end


#endif