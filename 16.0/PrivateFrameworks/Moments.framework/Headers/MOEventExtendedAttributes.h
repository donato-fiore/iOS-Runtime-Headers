// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MOEVENTEXTENDEDATTRIBUTES_H
#define MOEVENTEXTENDEDATTRIBUTES_H

@class NSArray, NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface MOEventExtendedAttributes : NSObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic) NSArray *photoMomentHolidays; // ivar: _photoMomentHolidays
@property (retain, nonatomic) NSArray *photoMomentInferences; // ivar: _photoMomentInferences
@property (copy, nonatomic) NSString *photoMomentLocalIdentifier; // ivar: _photoMomentLocalIdentifier
@property (retain, nonatomic) NSArray *photoMomentPersons; // ivar: _photoMomentPersons
@property (retain, nonatomic) NSArray *photoMomentPublicEvents; // ivar: _photoMomentPublicEvents


+(BOOL)supportsSecureCoding;
+(id)lowerCaseArrayOfStrings:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLocalIdentifier:(id)arg0 ;
-(id)initWithMoment:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif