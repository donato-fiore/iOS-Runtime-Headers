// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SSBAGPROFILECONFIG_H
#define SSBAGPROFILECONFIG_H

@class NSArray, NSDictionary, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface SSBagProfileConfig : NSObject <NSCopying>



@property (readonly, nonatomic) NSArray *bagKeys;
@property (retain, nonatomic) NSDictionary *bagKeysDictionary; // ivar: _bagKeysDictionary
@property (nonatomic) CGFloat bagLoadTimeout; // ivar: _bagLoadTimeout
@property (copy, nonatomic) NSString *profile; // ivar: _profile
@property (copy, nonatomic) NSString *profileVersion; // ivar: _profileVersion


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)bagKeyForStringRepresentation:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif