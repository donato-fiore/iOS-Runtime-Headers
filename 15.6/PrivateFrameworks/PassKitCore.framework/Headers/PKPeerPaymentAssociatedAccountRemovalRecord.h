// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPEERPAYMENTASSOCIATEDACCOUNTREMOVALRECORD_H
#define PKPEERPAYMENTASSOCIATEDACCOUNTREMOVALRECORD_H

@class NSString, NSDate;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKPeerPaymentAssociatedAccountRemovalRecord : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSString *altDSID; // ivar: _altDSID
@property (copy, nonatomic) NSDate *date; // ivar: _date
@property (nonatomic) BOOL hasPresentedNotification; // ivar: _hasPresentedNotification
@property (nonatomic) NSInteger reason; // ivar: _reason


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif