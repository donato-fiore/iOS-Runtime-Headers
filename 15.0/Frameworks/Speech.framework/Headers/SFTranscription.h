// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFTRANSCRIPTION_H
#define SFTRANSCRIPTION_H

@class NSString, NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SFTranscription : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) CGFloat averagePauseDuration; // ivar: _averagePauseDuration
@property (readonly, copy, nonatomic) NSString *formattedString; // ivar: _formattedString
@property (readonly, copy, nonatomic) NSArray *segments; // ivar: _segments
@property (readonly, nonatomic) CGFloat speakingRate; // ivar: _speakingRate


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithSegments:(id)arg0 formattedString:(id)arg1 speakingRate:(CGFloat)arg2 averagePauseDuration:(CGFloat)arg3 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif