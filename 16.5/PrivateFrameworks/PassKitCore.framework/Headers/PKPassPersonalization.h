// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPASSPERSONALIZATION_H
#define PKPASSPERSONALIZATION_H

@class NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface PKPassPersonalization : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSString *localizedDescription; // ivar: _localizedDescription
@property (readonly, nonatomic) NSUInteger requiredPersonalizationFields; // ivar: _requiredPersonalizationFields
@property (readonly, nonatomic) NSString *termsAndConditions; // ivar: _termsAndConditions


+(BOOL)supportsSecureCoding;
+(id)passPersonalizationWithPassBundle:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 bundle:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif