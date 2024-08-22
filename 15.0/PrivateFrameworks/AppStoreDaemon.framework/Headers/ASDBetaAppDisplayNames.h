// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASDBETAAPPDISPLAYNAMES_H
#define ASDBETAAPPDISPLAYNAMES_H

@class NSDictionary, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ASDBetaAppDisplayNames : NSObject <NSCopying, NSSecureCoding>



@property (copy) NSDictionary *localizedNames; // ivar: _localizedNames
@property (copy) NSString *primaryLocale; // ivar: _primaryLocale


+(BOOL)supportsSecureCoding;
+(id)displayNameWithLocalizedNames:(id)arg0 andPrimaryLocale:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif