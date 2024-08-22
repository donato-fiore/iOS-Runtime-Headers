// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKSHAREDSUMMARYTRANSACTION_H
#define HKSHAREDSUMMARYTRANSACTION_H

@class NSUUID, NSDate, NSDictionary, NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface HKSharedSummaryTransaction : NSObject <NSSecureCoding, NSCopying>



@property (readonly, copy, nonatomic) NSUUID *UUID; // ivar: _UUID
@property (readonly, copy, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (readonly, copy, nonatomic) NSDictionary *metadata; // ivar: _metadata
@property (readonly, copy, nonatomic) NSString *sourceDeviceIdentifier; // ivar: _sourceDeviceIdentifier


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithUUID:(id)arg0 sourceDeviceIdentifier:(id)arg1 metadata:(id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)addMetadata:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif