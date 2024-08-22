// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SLDACTIVECALLVIEWSLOTTAG_H
#define SLDACTIVECALLVIEWSLOTTAG_H

@class NSString, NSData, NSNumber;
@protocol NSCopying, NSSecureCoding;


#import "SLDSlotTag.h"

@interface SLDActiveCallViewSlotTag : SLDSlotTag <NSCopying, NSSecureCoding>



@property (retain, nonatomic) NSString *activeCallDisplayName; // ivar: _activeCallDisplayName
@property (retain, nonatomic) NSData *activeCallGroupPhotoData; // ivar: _activeCallGroupPhotoData
@property (readonly, nonatomic, getter=isCallActive) BOOL callActive;
@property (retain, nonatomic) NSNumber *callActiveNumber; // ivar: _callActiveNumber
@property (nonatomic) CGFloat maxWidth; // ivar: _maxWidth
@property (retain, nonatomic) NSNumber *maxWidthNumber; // ivar: _maxWidthNumber


+(BOOL)supportsSecureCoding;
+(id)tagForMaxWidth:(CGFloat)arg0 callActive:(BOOL)arg1 activeCallGroupPhotoData:(id)arg2 activeCallDisplayName:(id)arg3 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMaxWidth:(CGFloat)arg0 callActive:(BOOL)arg1 activeCallGroupPhotoData:(id)arg2 activeCallDisplayName:(id)arg3 ;
-(id)resolvedStyleForStyle:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif