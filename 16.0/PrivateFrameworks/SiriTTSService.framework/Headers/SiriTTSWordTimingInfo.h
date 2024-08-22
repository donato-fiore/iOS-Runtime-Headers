// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIRITTSWORDTIMINGINFO_H
#define SIRITTSWORDTIMINGINFO_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SiriTTSWordTimingInfo : NSObject <NSSecureCoding>



@property (nonatomic, readonly) NSString *description;
@property (nonatomic) CGFloat startTime; // ivar: startTime
@property (nonatomic) _NSRange textRange; // ivar: textRange


+(BOOL)supportsSecureCoding;
+(void)setSupportsSecureCoding:(BOOL)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStartTiming:(CGFloat)arg0 textRange:(struct _NSRange )arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif