// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKFEATURESETTINGS_H
#define HKFEATURESETTINGS_H

@class NSDictionary;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface HKFeatureSettings : NSObject <NSSecureCoding, NSCopying>



@property (readonly, copy, nonatomic) NSDictionary *keyValueStorage; // ivar: _keyValueStorage


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dataForKey:(id)arg0 ;
-(id)dataForKey:(id)arg0 error:(*id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)numberForKey:(id)arg0 ;
-(id)numberForKey:(id)arg0 error:(*id)arg1 ;
-(id)stringForKey:(id)arg0 ;
-(id)stringForKey:(id)arg0 error:(*id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif