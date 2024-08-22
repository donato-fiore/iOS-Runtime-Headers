// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SVXDEVICESETUPOPTIONS_H
#define SVXDEVICESETUPOPTIONS_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SVXDeviceSetupOptions : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSInteger gender; // ivar: _gender
@property (readonly, nonatomic) NSInteger hasActiveAccount; // ivar: _hasActiveAccount
@property (readonly, nonatomic) NSInteger isNewsRestricted; // ivar: _isNewsRestricted
@property (readonly, copy, nonatomic) NSString *languageCode; // ivar: _languageCode


+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_descriptionWithIndent:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLanguageCode:(id)arg0 gender:(NSInteger)arg1 hasActiveAccount:(NSInteger)arg2 isNewsRestricted:(NSInteger)arg3 ;
-(id)mutatedCopyWithMutator:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif