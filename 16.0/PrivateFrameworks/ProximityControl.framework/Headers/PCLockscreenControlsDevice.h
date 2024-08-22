// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PCLOCKSCREENCONTROLSDEVICE_H
#define PCLOCKSCREENCONTROLSDEVICE_H

@class NSNumber, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PCLockscreenControlsDevice : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSNumber *distance; // ivar: _distance
@property (retain, nonatomic) NSString *mediaRouteID; // ivar: _mediaRouteID


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMediaRouteID:(id)arg0 distance:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif