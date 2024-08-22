// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SSMUTABLEBAGPROFILECONFIG_H
#define SSMUTABLEBAGPROFILECONFIG_H

@class NSMutableDictionary, NSString;


#import "SSBagProfileConfig.h"

@interface SSMutableBagProfileConfig : SSBagProfileConfig

@property (nonatomic) CGFloat bagLoadTimeout;
@property (retain, nonatomic) NSMutableDictionary *mutableBagKeysDictionary; // ivar: _mutableBagKeysDictionary
@property (copy, nonatomic) NSString *profile;
@property (copy, nonatomic) NSString *profileVersion;


-(id)bagKeysDictionary;
-(id)init;
-(void)registerBagKey:(id)arg0 valueType:(NSUInteger)arg1 ;
-(void)registerBagKey:(id)arg0 valueType:(NSUInteger)arg1 defaultValue:(id)arg2 ;


@end


#endif