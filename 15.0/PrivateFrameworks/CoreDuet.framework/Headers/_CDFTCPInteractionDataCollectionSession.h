// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _CDFTCPINTERACTIONDATACOLLECTIONSESSION_H
#define _CDFTCPINTERACTIONDATACOLLECTIONSESSION_H

@class NSString, NSDate, NSData;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _CDFTCPInteractionDataCollectionSession : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSUInteger batchNumber; // ivar: _batchNumber
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSDate *lastCollectionDate; // ivar: _lastCollectionDate
@property (readonly, copy, nonatomic) NSDate *latestStartDate; // ivar: _latestStartDate
@property (readonly, copy, nonatomic) NSData *salt; // ivar: _salt


+(BOOL)supportsSecureCoding;
+(id)generateNewSession;
-(BOOL)isValidForCollectionDate:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 salt:(id)arg1 latestStartDate:(id)arg2 lastCollectionDate:(id)arg3 batchNumber:(NSUInteger)arg4 ;
-(id)subsequentSessionWithlatestStartDate:(id)arg0 lastCollectionDate:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif