// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIKBRTFINGERINFO_H
#define _UIKBRTFINGERINFO_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface _UIKBRTFingerInfo : NSObject <NSCopying>



@property (readonly, nonatomic) CGFloat feedbackAlpha;
@property (nonatomic) NSUInteger identity; // ivar: _identity
@property (nonatomic) CGFloat lastSeenTimestamp; // ivar: _lastSeenTimestamp
@property (nonatomic) CGPoint location; // ivar: _location
@property (nonatomic) CGFloat radius; // ivar: _radius
@property (nonatomic) BOOL unknownSeen; // ivar: _unknownSeen


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;


@end


#endif