// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUINSTALLPOLICY_H
#define SUINSTALLPOLICY_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SUInstallPolicy : NSObject <NSSecureCoding>



@property (readonly, nonatomic) BOOL autoUpdateEnabled; // ivar: _autoUpdateEnabled
@property (retain, nonatomic) NSString *clientName; // ivar: _clientName
@property (nonatomic) NSUInteger skipsAllowed; // ivar: _skipsAllowed
@property (nonatomic) NSUInteger type; // ivar: _type
@property (readonly, nonatomic) BOOL useDarkBoot; // ivar: _useDarkBoot


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithInstallPolicyType:(NSUInteger)arg0 ;
-(void)_setDarkBoolEnabled:(BOOL)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif