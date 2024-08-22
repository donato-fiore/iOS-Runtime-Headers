// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PPFUZZYCONTACTQUERY_H
#define PPFUZZYCONTACTQUERY_H

@class NSDate, NSSet;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface PPFuzzyContactQuery : NSObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic) NSDate *endDate; // ivar: _endDate
@property (nonatomic) BOOL onlyAddressBook; // ivar: _onlyAddressBook
@property (retain, nonatomic) NSSet *sourceBundleIds; // ivar: _sourceBundleIds
@property (retain, nonatomic) NSDate *startDate; // ivar: _startDate


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToFuzzyContactQuery:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif