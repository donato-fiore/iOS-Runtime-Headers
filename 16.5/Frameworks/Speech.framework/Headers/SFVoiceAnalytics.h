// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFVOICEANALYTICS_H
#define SFVOICEANALYTICS_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "SFAcousticFeature.h"

@interface SFVoiceAnalytics : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) SFAcousticFeature *jitter; // ivar: _jitter
@property (readonly, copy, nonatomic) SFAcousticFeature *pitch; // ivar: _pitch
@property (readonly, copy, nonatomic) SFAcousticFeature *shimmer; // ivar: _shimmer
@property (readonly, copy, nonatomic) SFAcousticFeature *voicing; // ivar: _voicing


+(BOOL)supportsSecureCoding;
-(id)_initWithJitter:(id)arg0 shimmer:(id)arg1 pitch:(id)arg2 voicing:(id)arg3 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif