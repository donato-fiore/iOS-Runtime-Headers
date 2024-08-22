// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKCONTACTFIELDCONFIGURATION_H
#define PKCONTACTFIELDCONFIGURATION_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKContactFieldConfiguration : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
+(id)contactFieldConfigurationWithDictionary:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithType:(NSInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif