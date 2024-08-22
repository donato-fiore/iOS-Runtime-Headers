// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SACINFO_H
#define SACINFO_H

@class NSNumber, NSArray, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SACInfo : NSObject <NSSecureCoding>



@property (retain) NSNumber *angle; // ivar: _angle
@property (retain) NSNumber *calibrationMode; // ivar: _calibrationMode
@property (retain) NSArray *companionInfo; // ivar: _companionInfo
@property (retain) NSArray *lfeqIR; // ivar: _lfeqIR
@property (retain) NSString *position; // ivar: _position
@property (retain) NSString *role; // ivar: _role
@property (retain) NSNumber *roomGain; // ivar: _roomGain
@property (retain) NSNumber *spatialAudio; // ivar: _spatialAudio


+(BOOL)supportsSecureCoding;
+(id)calibrationModeDescription:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif