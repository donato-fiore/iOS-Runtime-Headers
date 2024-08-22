// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDFREEZEQUANTITYSAMPLESERIESOPERATION_H
#define HDFREEZEQUANTITYSAMPLESERIESOPERATION_H

@class NSDate, NSUUID, NSDictionary;


#import "HDJournalableOperation.h"

@interface HDFreezeQuantitySampleSeriesOperation : HDJournalableOperation

@property (readonly, copy, nonatomic) NSDate *endDate; // ivar: _endDate
@property (readonly, nonatomic) NSInteger freezeResult; // ivar: _freezeResult
@property (readonly, copy, nonatomic) NSUUID *frozenIdentifier; // ivar: _frozenIdentifier
@property (readonly, copy, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSDictionary *metadata; // ivar: _metadata


+(BOOL)supportsSecureCoding;
-(BOOL)performWithProfile:(id)arg0 transaction:(id)arg1 error:(*id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 metadata:(id)arg1 endDate:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif