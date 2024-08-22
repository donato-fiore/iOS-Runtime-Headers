// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LNAVAILABILITYANNOTATION_H
#define LNAVAILABILITYANNOTATION_H

@class NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface LNAvailabilityAnnotation : NSObject <NSSecureCoding, NSCopying>



@property (readonly, copy, nonatomic) NSString *deprecatedVersion; // ivar: _deprecatedVersion
@property (readonly, copy, nonatomic) NSString *introducedVersion; // ivar: _introducedVersion
@property (readonly, copy, nonatomic) NSString *obsoletedVersion; // ivar: _obsoletedVersion


+(BOOL)supportsSecureCoding;
+(id)available;
+(id)deprecated;
+(id)unavailable;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIntroducedVersion:(id)arg0 deprecatedVersion:(id)arg1 available:(BOOL)arg2 deprecated:(BOOL)arg3 ;
-(id)initWithIntroducedVersion:(id)arg0 deprecatedVersion:(id)arg1 obsoletedVersion:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif