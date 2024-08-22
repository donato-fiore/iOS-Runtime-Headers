// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DNDMODECONFIGURATIONTRIGGER_H
#define DNDMODECONFIGURATIONTRIGGER_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface DNDModeConfigurationTrigger : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSUInteger enabledSetting; // ivar: _enabledSetting
@property (readonly, nonatomic) BOOL hasSecureData;
@property (readonly, nonatomic) BOOL isEnabled;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEnabledSetting:(NSUInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif