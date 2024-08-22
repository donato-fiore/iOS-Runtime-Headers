// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKOSVERSIONREQUIREMENT_H
#define PKOSVERSIONREQUIREMENT_H

@class NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface PKOSVersionRequirement : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSString *appletv; // ivar: _appletv
@property (readonly, nonatomic) NSString *ipad; // ivar: _ipad
@property (readonly, nonatomic) NSString *iphone; // ivar: _iphone
@property (readonly, nonatomic) NSString *ipod; // ivar: _ipod
@property (readonly, nonatomic) NSString *mac; // ivar: _mac
@property (readonly, nonatomic) NSString *specifiediphone; // ivar: _specifiediphone
@property (readonly, nonatomic) NSString *watch; // ivar: _watch


+(BOOL)supportsSecureCoding;
+(id)fromDeviceVersion;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToOSVersionRequirement:(id)arg0 ;
-(NSInteger)compare:(id)arg0 deviceClass:(id)arg1 ;
-(NSUInteger)hash;
-(id)asDictionary;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)versionForDeviceClass:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif