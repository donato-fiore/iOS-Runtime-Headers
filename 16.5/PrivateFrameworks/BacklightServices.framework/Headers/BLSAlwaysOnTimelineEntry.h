// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLSALWAYSONTIMELINEENTRY_H
#define BLSALWAYSONTIMELINEENTRY_H

@class NSDate;
@protocol NSCopying, NSMutableCopying, NSObject><NSCopying, NSObject;

#import <Foundation/Foundation.h>


@interface BLSAlwaysOnTimelineEntry : NSObject <NSCopying, NSMutableCopying>



@property (nonatomic, getter=isAnimated) BOOL animated; // ivar: _animated
@property (nonatomic) CGFloat duration; // ivar: _duration
@property (readonly, nonatomic) NSDate *presentationTime; // ivar: _presentationTime
@property (nonatomic) NSInteger requestedFidelity; // ivar: _requestedFidelity
@property (retain, nonatomic) NSObject<NSObject><NSCopying> *timelineIdentifier; // ivar: _timelineIdentifier
@property (retain, nonatomic) NSObject<NSObject> *userObject; // ivar: _userObject


+(id)loggingStringForPresentationTime:(id)arg0 ;
+(id)shortLoggingStringForPresentationTime:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)initWithPresentationTime:(id)arg0 requestedFidelity:(NSInteger)arg1 animated:(BOOL)arg2 duration:(CGFloat)arg3 timelineIdentifier:(id)arg4 userObject:(id)arg5 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif