// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNCOUNTRYINFORMATION_H
#define CNCOUNTRYINFORMATION_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface CNCountryInformation : NSObject <NSCopying>



@property (readonly, copy, nonatomic) NSString *isoCountryCode; // ivar: _isoCountryCode
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, copy, nonatomic) NSString *phoneticName; // ivar: _phoneticName


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithISOCountryCode:(id)arg0 name:(id)arg1 phoneticName:(id)arg2 ;


@end


#endif