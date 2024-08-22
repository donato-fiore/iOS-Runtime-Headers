// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _CLVLLOCALIZATIONRESULT_H
#define _CLVLLOCALIZATIONRESULT_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _CLVLLocalizationResult : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) float confidence; // ivar: _confidence
@property (nonatomic) ? covariance; // ivar: _covariance
@property (nonatomic) ? location; // ivar: _location
@property (nonatomic) CGFloat timestamp; // ivar: _timestamp
@property (nonatomic) ? transform; // ivar: _transform


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)descriptionWithMemberIndent:(id)arg0 endIndent:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif