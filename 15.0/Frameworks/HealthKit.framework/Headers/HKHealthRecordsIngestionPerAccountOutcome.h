// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKHEALTHRECORDSINGESTIONPERACCOUNTOUTCOME_H
#define HKHEALTHRECORDSINGESTIONPERACCOUNTOUTCOME_H

@class NSUUID;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HKHealthRecordsIngestionPerAccountOutcome : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSUUID *accountIdentifier; // ivar: _accountIdentifier
@property (readonly, nonatomic) NSUInteger info; // ivar: _info


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)formattedInfoStringJoinedByString:(id)arg0 ;
-(id)initWithAccountIdentifier:(id)arg0 info:(NSUInteger)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif