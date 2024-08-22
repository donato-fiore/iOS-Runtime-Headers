// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SOAUTHORIZATIONHINTSCORE_H
#define SOAUTHORIZATIONHINTSCORE_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SOAuthorizationHintsCore : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSString *localizedExtensionBundleDisplayName; // ivar: _localizedExtensionBundleDisplayName


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLocalizedExtensionBundleDisplayName:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif