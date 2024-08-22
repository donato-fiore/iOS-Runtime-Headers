// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SACRASHDETECTIONEVENT_H
#define SACRASHDETECTIONEVENT_H

@class NSDate, CLLocation;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface SACrashDetectionEvent : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSDate *date; // ivar: _date
@property (readonly, nonatomic) CGFloat elapsed;
@property (nonatomic) BOOL isNotified; // ivar: _isNotified
@property (readonly, nonatomic) CLLocation *location; // ivar: _location
@property (readonly, nonatomic) NSInteger response; // ivar: _response
@property (readonly, nonatomic) NSDate *timeOfResolution; // ivar: _timeOfResolution


+(BOOL)supportsSecureCoding;
+(CGFloat)crashDetectionEventTimeout;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTimeOfDetection:(id)arg0 timeOfResolution:(id)arg1 response:(NSInteger)arg2 location:(id)arg3 ;
-(id)initWithTimeOfDetection:(id)arg0 timeOfResolution:(id)arg1 response:(NSInteger)arg2 location:(id)arg3 isNotified:(BOOL)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif