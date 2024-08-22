// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKACCOUNTSCHEDULEDTRANSFERLIST_H
#define PKACCOUNTSCHEDULEDTRANSFERLIST_H

@class NSMutableArray, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKAccountScheduledTransferList : NSObject <NSSecureCoding>

 {
    NSMutableArray *_scheduledTransfers;
}


@property (readonly, nonatomic) NSArray *scheduledTransfers;


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithScheduledTransfer:(id)arg0 ;
-(id)jsonArrayRepresentation;
-(id)scheduledTransferOfFundingSourceType:(NSInteger)arg0 ;
-(void)addScheduledTransfer:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif