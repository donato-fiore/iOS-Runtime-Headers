// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDHRSSIGNEDCLINICALDATAPROCESSINGCONTEXTCOLLECTION_H
#define HDHRSSIGNEDCLINICALDATAPROCESSINGCONTEXTCOLLECTION_H

@class NSArray, NSString, NSDate;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HDHRSSignedClinicalDataProcessingContextCollection : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSArray *contextItems; // ivar: _contextItems
@property (readonly, copy, nonatomic) NSString *countryCode; // ivar: _countryCode
@property (readonly, nonatomic) NSUInteger options; // ivar: _options
@property (readonly, copy, nonatomic) NSDate *receivedDate; // ivar: _receivedDate


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithReceivedDate:(id)arg0 countryCode:(id)arg1 options:(NSUInteger)arg2 contextItems:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif