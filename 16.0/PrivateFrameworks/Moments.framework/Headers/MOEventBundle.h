// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MOEVENTBUNDLE_H
#define MOEVENTBUNDLE_H

@class NSUUID, NSString, NSDate, NSArray;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface MOEventBundle : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSUUID *bundleIdentifier; // ivar: _bundleIdentifier
@property (retain, nonatomic) NSString *bundleType; // ivar: _bundleType
@property (readonly, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (retain, nonatomic) NSDate *endDate; // ivar: _endDate
@property (retain, nonatomic) NSArray *events; // ivar: _events
@property (retain, nonatomic) NSDate *expirationDate; // ivar: _expirationDate
@property (nonatomic) BOOL filtered; // ivar: _filtered
@property (retain, nonatomic) NSString *promptLanguage; // ivar: _promptLanguage
@property (nonatomic) NSUInteger source; // ivar: _source
@property (retain, nonatomic) NSDate *startDate; // ivar: _startDate


+(BOOL)supportsSecureCoding;
-(BOOL)containTheSameEventSet:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)shareEvents:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithBundleIdentifier:(id)arg0 creationDate:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEventSet:(id)arg0 filtered:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setPropertiesBasedOnEvents;


@end


#endif