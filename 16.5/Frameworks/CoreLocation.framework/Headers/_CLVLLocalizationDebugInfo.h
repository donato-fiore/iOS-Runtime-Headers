// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _CLVLLOCALIZATIONDEBUGINFO_H
#define _CLVLLOCALIZATIONDEBUGINFO_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "_CLVLLocalizationMaps488Details.h"

@interface _CLVLLocalizationDebugInfo : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) _CLVLLocalizationMaps488Details *maps488Details; // ivar: _maps488Details


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)descriptionWithMemberIndent:(id)arg0 endIndent:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithVLLocalizationDebugInfo:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif